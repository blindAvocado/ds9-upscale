@echo off
REM Stage 3: AviSynth processing (cleanup + color correction) to ProRes
REM Usage: Drag a decoded .mov file onto this script
REM Output: ProRes .mov ready for Topaz

if "%~1"=="" (
    echo Drag a decoded .mov file onto this script to process it
    pause
    exit /b
)

set "INPUT=%~1"
set "INPUT_NAME=%~n1"
set "OUTPUT_DIR=%~dp1"
set "MAPS_DIR=%OUTPUT_DIR%maps"
set "AVS_FILE=%OUTPUT_DIR%%INPUT_NAME%_process.avs"
set "OUTPUT=%OUTPUT_DIR%%INPUT_NAME%_for_topaz.mov"

echo.
echo ============================================================
echo Stage 3: AviSynth Processing
echo ============================================================
echo.
echo Input:  %INPUT%
echo Script: %AVS_FILE%
echo Output: %OUTPUT%
echo.

REM Generate AVS script
echo Generating AviSynth script...

(
echo # Auto-generated processing script
echo # Following DS9:Redefined workflow
echo.
echo SetFilterMTMode^("DEFAULT_MT_MODE", 2^)
echo SetFilterMTMode^("LSMASHVideoSource", MT_SERIALIZED^)
echo SetFilterMTMode^("ReplaceFramesSimple", 3^)
echo SetFilterMTMode^("RemapFrames", 3^)
echo SetFilterMTMode^("vsLGhost", 3^)
echo SetMemoryMax^(8192*8^)
echo.
echo # === LOAD SOURCE ===
echo # Raw decoded from ld-chroma-decoder is 30i interlaced
echo input = LSMASHVideoSource^("%INPUT%"^).AssumeTFF^(^).Crop^(0, 4, 0, -4^)
echo.
echo input
echo.
echo # === DEINTERLACE TO 60P ===
echo # QTGMC bobs 30i to 60p with high quality motion interpolation
echo # QTGMC^(Preset="Slower", SourceMatch=3, Lossless=2^)
echo # TFM^(mode=1, slow=2, PP=1, cthresh=8, blockx=8, blocky=8, MI=40^)
echo # TDecimate^(mode=0, hybrid=1, m2PA=true, nt=2, blockx=8, blocky=8, chroma=true^)
echo DW = input.DoubleWeave^(^)
echo PD1 = DW.Pulldown^(0, 3^)
echo PD2 = DW.Pulldown^(1, 4^)
echo PD3 = DW.Pulldown^(0, 2^)
echo PD4 = DW.Pulldown^(1, 3^)
echo PD5 = DW.Pulldown^(2, 4^)
echo DI  = input.QTGMC^(Preset="Slower", EdiThreads=12, SourceMatch=3, Lossless=2, Sharpness=0.0^).TDecimate^(mode=2, rate=23.976^)
echo RIFEConv = input.ConvertBits^(32^).ConvertToPlanarRGB^(matrix="601:l"^).RIFE^(model=65, fps_num=24000, fps_den=1001, gpu_thread=4^).ConvertBits^(10, dither=1^).ConvertToYUV422^(matrix="601:l"^)
echo.
echo PD1
echo.
echo ReplaceFramesSimple^(PD2, "%MAPS_DIR%\PD2Map.txt"^)
echo ReplaceFramesSimple^(PD3, "%MAPS_DIR%\PD3Map.txt"^)
echo ReplaceFramesSimple^(PD4, "%MAPS_DIR%\PD4Map.txt"^)
echo ReplaceFramesSimple^(PD5, "%MAPS_DIR%\PD5Map.txt"^)
echo ReplaceFramesSimple^(RIFEConv, "%MAPS_DIR%\RIFEMap.txt"^)
echo RemapFrames^(fileName="%MAPS_DIR%\DIMap.txt", sourceClip=DI^)
echo.
echo # === DERAINBOW ===
echo ASTDRmc^(3,5,2,5,FluxStv=30,edgem=true^)
echo.
echo # === DEGHOSTING ===
echo vsLGhost^(mode=[1, 1, 1, 1, 1], shift=[3, 4, 5, 6, 7], intensity=[25, 20, 15, 10, 5]^)
echo.
echo # === DOT CRAWL REDUCTION ===
echo #QTGMC^(Preset="Slower", InputType=1^)
echo.
echo # === COLOR CORRECTION ===
echo # Convert from NTSC 1953 ^(BT.470m^) to BT.709
echo fmtc_bitdepth^(bits=16^)
echo fmtc_resample^(css="444"^)
echo fmtc_matrix^(mats="fcc", fulls=false^)
echo fmtc_transfer^(transs="1886", transd="linear"^)
echo fmtc_primaries^(prims="470m", primd="709", wconv=true^)
echo fmtc_transfer^(transs="linear", transd="1886"^)
echo fmtc_matrix^(matd="709", fulld=false^)
echo fmtc_resample^(css="422"^)
echo fmtc_bitdepth^(bits=10^)
echo ConvertToYUV420^(^)
echo.
echo Prefetch^(12^)
) > "%AVS_FILE%"

echo.
echo Starting ffmpeg encode to ProRes...
echo.

ffmpeg -i "%AVS_FILE%" -threads 12 ^
	-c:v prores_ks -profile:v 3 -vendor ap10 -pix_fmt yuv422p10le ^
	-sws_flags "spline+accurate_rnd+full_chroma_int+full_chroma_inp" ^
	"%OUTPUT%"

echo.
echo ============================================================
echo Processing complete: %OUTPUT%
echo.
echo ============================================================
pause
