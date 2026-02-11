@echo off
REM Stage 2: Decode .tbc to ProRes using ld-chroma-decoder
REM Usage: Drag a .tbc file onto this script
REM Output: ProRes .mov in same folder

if "%~1"=="" (
    echo Drag a .tbc file onto this script to decode it
    pause
    exit /b
)

set "filepath=%~1"
set "filename=%~n1"
set "filedir=%~dp1"

echo.
echo ============================================================
echo Starting decode: %filename%.tbc
echo ============================================================
echo.

REM DS9:Redefined settings:
REM -f ntsc3d = NTSC 3D comb filter
REM --luma-nr 0 = no luma noise reduction (let stacking handle it)
REM --chroma-nr 0 = no chroma noise reduction
REM --chroma-gain 1.0 = neutral chroma gain
REM --chroma-phase 0.0 = neutral phase
REM --ntsc-phase-comp = chroma phase compensation (critical for color accuracy)

D:\Projects\DS9.LaserDisc.Upscale\software\vhs-decode\build\tools\ld-chroma-decoder\ld-chroma-decoder.exe -f ntsc3d --luma-nr 0 --chroma-nr 0 --chroma-gain 1.0 --chroma-phase 0.0 --adapt-threshold 0.12 --chroma-weight 1.4 --ntsc-phase-comp -p y4m --input-json "%filedir%%filename%.tbc.json" "%filedir%%filename%.tbc" | ffmpeg -i - -c:v prores_ks -profile:v 3 -vendor ap10 -pix_fmt yuv422p10le -sws_flags "spline+accurate_rnd+full_chroma_int+full_chroma_inp" "%filedir%%filename%.mov"

if %ERRORLEVEL% NEQ 0 (
    echo.
    echo ============================================================
    echo ERROR: Decode failed with error code %ERRORLEVEL%
    echo ============================================================
    pause
    exit /b %ERRORLEVEL%
)

echo.
echo ============================================================
echo Decode complete: %filedir%%filename%.mov
echo.
echo Next: Run Stage 3 (AviSynth processing)
echo You can delete the .tbc and .tbc.json files to save space.
echo ============================================================
pause
