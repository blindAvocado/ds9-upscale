SetFilterMTMode("DEFAULT_MT_MODE", 2)
SetFilterMTMode("LSMASHVideoSource", MT_SERIALIZED)
Threads=16

# === CONFIGURATION ===
basedir = "D:\Projects\DS9_LaserDisc_Upscale\S01E01\"
sourcefile = basedir + "DS9-S01E01_01_raw-ld.mov"

# === LOAD SOURCE ===
input = LSMASHVideoSource(sourcefile).AssumeTFF().Crop(0, 4, 0, -4)
input

# === COLOR CORRECTION ===
# Convert from NTSC 1953 (BT.470m) to BT.709
colorfix = input.fmtc_bitdepth(bits=16)
colorfix = colorfix.fmtc_resample(css="444")
colorfix = colorfix.fmtc_matrix(mats="fcc", fulls=false)
colorfix = colorfix.fmtc_transfer(transs="1886", transd="linear")
colorfix = colorfix.fmtc_primaries(prims="470m", primd="709", wconv=true)
colorfix = colorfix.fmtc_transfer(transs="linear", transd="1886")
colorfix = colorfix.fmtc_matrix(matd="709", fulld=false)
colorfix = colorfix.fmtc_resample(css="422")
colorfix = colorfix.fmtc_bitdepth(bits=10)
colorfix = colorfix.ConvertToYUV420()

# === DEGHOSTING ===
#colorfix = colorfix.vsLGhost(mode=[1, 1, 1, 1, 1], shift=[3, 4, 5, 6, 7], intensity=[25, 20, 15, 10, 5])

# === DERAINBOW ===
DR1 = colorfix.ASTDRmc(tempsoftsc=1)
DR5 = colorfix.ASTDRmc(tempsoftsc=5)
DR15 = colorfix.ASTDRmc(3,5,2,5,FluxStv=30,edgem=true)

# === COMPARISON GRID ===
function LabelClip(clip c, string txt) { return c.Subtitle(txt, align=7, size=28, text_color=$FFFFFF, halo_color=$000000) }

ORIG_L = LabelClip(input, "Original")
COLORFIX_L = LabelClip(colorfix, "Color Fix")
DR1_L = LabelClip(DR1, "tempsoftsc=1")
DR5_L = LabelClip(DR5, "tempsoftsc=5")
DR15_L = LabelClip(DR15, "3,15,2,FluxStv=30,edgem=true")

Row1 = StackHorizontal(COLORFIX_L, DR1_L)
Row2 = StackHorizontal(DR15_L, DR5_L)

Grid = StackVertical(Row1, Row2)
Grid.BilinearResize(width/2, height/2)

# === VIEW SELECTION ===
# 0 = Grid view (default)
# 1 = Original
# 2 = Color fix
VIEW_MODE = 0

Select(VIEW_MODE, Grid, input, colorfix)

#Prefetch(Threads)