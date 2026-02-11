# Auto-generated processing script
# Following DS9:Redefined workflow

SetFilterMTMode("DEFAULT_MT_MODE", 2)
SetFilterMTMode("LSMASHVideoSource", MT_SERIALIZED)
SetFilterMTMode("ReplaceFramesSimple", 3)
SetFilterMTMode("RemapFrames", 3)
SetFilterMTMode("vsLGhost", 3)
SetMemoryMax(8192*8)

# === LOAD SOURCE ===
# Raw decoded from ld-chroma-decoder is 30i interlaced
input = LSMASHVideoSource("D:\Projects\DS9_LaserDisc_Upscale\S01E01\DS9-S01E01_01_raw-ld.mov").AssumeTFF().Crop(0, 4, 0, -4)

input

# === DEINTERLACE TO 60P ===
# QTGMC bobs 30i to 60p with high quality motion interpolation
# QTGMC(Preset="Slower", SourceMatch=3, Lossless=2)
# TFM(mode=1, slow=2, PP=1, cthresh=8, blockx=8, blocky=8, MI=40)
# TDecimate(mode=0, hybrid=1, m2PA=true, nt=2, blockx=8, blocky=8, chroma=true)
DW = input.DoubleWeave()
PD1 = DW.Pulldown(0, 3)
PD2 = DW.Pulldown(1, 4)
PD3 = DW.Pulldown(0, 2)
PD4 = DW.Pulldown(1, 3)
PD5 = DW.Pulldown(2, 4)
DI  = input.QTGMC(Preset="Slower", EdiThreads=12, SourceMatch=3, Lossless=2, Sharpness=0.0).TDecimate(mode=2, rate=23.976)
RIFEConv = input.ConvertBits(32).ConvertToPlanarRGB(matrix="601:l").RIFE(model=65, fps_num=24000, fps_den=1001, gpu_thread=4).ConvertBits(10, dither=1).ConvertToYUV422(matrix="601:l")

PD1

ReplaceFramesSimple(PD2, "D:\Projects\DS9_LaserDisc_Upscale\S01E01\maps\PD2Map.txt")
ReplaceFramesSimple(PD3, "D:\Projects\DS9_LaserDisc_Upscale\S01E01\maps\PD3Map.txt")
ReplaceFramesSimple(PD4, "D:\Projects\DS9_LaserDisc_Upscale\S01E01\maps\PD4Map.txt")
ReplaceFramesSimple(PD5, "D:\Projects\DS9_LaserDisc_Upscale\S01E01\maps\PD5Map.txt")
ReplaceFramesSimple(RIFEConv, "D:\Projects\DS9_LaserDisc_Upscale\S01E01\maps\RIFEMap.txt")
RemapFrames(fileName="D:\Projects\DS9_LaserDisc_Upscale\S01E01\maps\DIMap.txt", sourceClip=DI)

# === DERAINBOW ===
ASTDRmc(3,5,2,5,FluxStv=30,edgem=true)

# === DEGHOSTING ===
vsLGhost(mode=[1, 1, 1, 1, 1], shift=[3, 4, 5, 6, 7], intensity=[25, 20, 15, 10, 5])

# === DOT CRAWL REDUCTION ===
#QTGMC(Preset="Slower", InputType=1)

# === COLOR CORRECTION ===
# Convert from NTSC 1953 (BT.470m) to BT.709
fmtc_bitdepth(bits=16)
fmtc_resample(css="444")
fmtc_matrix(mats="fcc", fulls=false)
fmtc_transfer(transs="1886", transd="linear")
fmtc_primaries(prims="470m", primd="709", wconv=true)
fmtc_transfer(transs="linear", transd="1886")
fmtc_matrix(matd="709", fulld=false)
fmtc_resample(css="422")
fmtc_bitdepth(bits=10)
ConvertToYUV420()

Prefetch(12)
