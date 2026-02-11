@echo off
REM Stage 4: Topaz file processing (color restoration) to MKV
REM Usage: Drag a decoded .mov file onto this script
REM Output: Finalized episode

if "%~1"=="" (
    echo Drag a .mov file onto this script to process it
    pause
    exit /b
)

set "INPUT=%~1"
set "INPUT_NAME=%~n1"
set "OUTPUT_DIR=%~dp1"
set "OUTPUT=%OUTPUT_DIR%%INPUT_NAME%-05_final.mkv"

ffmpeg -i "%INPUT%" ^
    -c:v libx265 -profile:v main10 -crf 22.5 -preset medium -tune grain ^
    -aspect 4:3 -pix_fmt yuv420p10le ^
    -color_range tv -colorspace bt709 -color_trc bt709 -color_primaries bt709 ^
    -sws_flags "spline+accurate_rnd+full_chroma_int+full_chroma_inp" "%OUTPUT%"