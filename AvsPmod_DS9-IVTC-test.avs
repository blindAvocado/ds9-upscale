SetFilterMTMode("DEFAULT_MT_MODE", 2)
SetFilterMTMode("LSMASHVideoSource", MT_SERIALIZED)
SetFilterMTMode("ReplaceFramesSimple", 3)
SetFilterMTMode("RemapFrames", 3)
SetFilterMTMode("vsLGhost", 3)
SetFilterMTMode("QTGMC", 2)
SetMemoryMax(8192*8)

Threads=12

# === CONFIGURATION ===
basedir = "D:\Projects\DS9_LaserDisc_Upscale\S01E01\"
mapdir = basedir + "maps\"
sourcefile = basedir + "DS9-S01E01_01_raw-ld.mov"
pd2map = mapdir + "PD2Map.txt"
pd3map = mapdir + "PD3Map.txt"
pd4map = mapdir + "PD4Map.txt"
pd5map = mapdir + "PD5Map.txt"
rifemap = mapdir + "RIFEMap.txt"
dimap = mapdir + "DIMap.txt"

# === LOAD SOURCE ===
input = LSMASHVideoSource(sourcefile).AssumeTFF().Crop(0, 4, 0, -4)
input

# === PULLDOWN PATTERNS ===
DW = input.DoubleWeave()
PD1 = DW.Pulldown(0, 3)
PD2 = DW.Pulldown(1, 4)
PD3 = DW.Pulldown(0, 2)
PD4 = DW.Pulldown(1, 3)
PD5 = DW.Pulldown(2, 4)

# === RIFE CONVERSION (30p to 24p) ===
RIFEConv = input.ConvertBits(32).ConvertToPlanarRGB(matrix="601:l").RIFE(model=65, fps_num=24000, fps_den=1001, gpu_thread=4).ConvertBits(10, dither=1).ConvertToYUV422(matrix="601:l")

# === DEINTERLACE OPTIONS ===
DIFast    = input.QTGMC(Preset="Draft", EdiThreads=Threads).TDecimate(mode=2, rate=23.976)
DI          = input.QTGMC(Preset="Very Slow", SourceMatch=3, Lossless=2, Sharpness=0.0).TDecimate(mode=2, rate=23.976)
DI60        = input.QTGMC(Preset="Very Slow", SourceMatch=3, Lossless=2, Sharpness=0.0) # 59.94p

# === MASTER OUTPUT ===
Master = PD1
Master = Master.ReplaceFramesSimple(PD2, pd2map)
Master = Master.ReplaceFramesSimple(PD3, pd3map)
Master = Master.ReplaceFramesSimple(PD4, pd4map)
Master = Master.ReplaceFramesSimple(PD5, pd5map)
Master = Master.ReplaceFramesSimple(RIFEConv, rifemap)
Master = Master.RemapFrames(fileName=dimap, sourceClip=DI)

# === COMPARISON GRID ===
function LabelClip(clip c, string txt) { return c.Subtitle(txt, align=7, size=28, text_color=$FFFFFF, halo_color=$000000) }

PD1_L = LabelClip(PD1, "PD1 - 0,3")
PD2_L = LabelClip(PD2, "PD2 - 1,4")
PD3_L = LabelClip(PD3, "PD3 - 0,2")
PD4_L = LabelClip(PD4, "PD4 - 1,3")
PD5_L = LabelClip(PD5, "PD5 - 2,4")
DIFast_L = LabelClip(DIFast, "DIFast")
DI_L = LabelClip(DI, "DISlow")
RIFEConv_L = LabelClip(RIFEConv, "RIFE")

Row1 = StackHorizontal(PD1_L, PD2_L, PD3_L)
Row2 = StackHorizontal(PD4_L, DI_L, RIFEConv_L)

Grid = StackVertical(Row1, Row2)
#Grid = Grid.Tweak(bright=-50, cont=3).Sharpen(1)
Grid = Grid.Tweak(bright=25, cont=1)
Grid.BilinearResize(width/2, height/2)

Compare = StackHorizontal(PD2_L, DI_L)
Compare.BilinearResize(width/2, height/2)

# === MASTER OUTPUT (LABELED) ===
MasterLabeled = PD1_L
MasterLabeled = MasterLabeled.ReplaceFramesSimple(PD2_L, pd2map)
MasterLabeled = MasterLabeled.ReplaceFramesSimple(PD3_L, pd3map)
MasterLabeled = MasterLabeled.ReplaceFramesSimple(PD4_L, pd4map)
MasterLabeled = MasterLabeled.ReplaceFramesSimple(PD5_L, pd5map)
MasterLabeled = MasterLabeled.ReplaceFramesSimple(RIFEConv_L, rifemap)
MasterLabeled = MasterLabeled.RemapFrames(fileName=dimap, sourceClip=DI_L)

# === VIEW SELECTION ===
# 0 = Grid view (default)
# 1 = Master only (clean)
# 2 = Master only (labeled)
# 3 = DI (full size)
# 4 = Compare view PD / DI
VIEW_MODE = 0

Select(VIEW_MODE, Grid, Master, MasterLabeled, DI, Compare)

Prefetch(Threads)