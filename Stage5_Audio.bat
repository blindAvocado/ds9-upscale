@echo off
REM Stage 5: Decode .pcm digital audio to wav
REM Usage: Drag a .pcm file onto this script
REM Output: .wav in same folder

if "%~1"=="" (
    echo Drag a .efm file onto this script to decode it
    pause
    exit /b
)

set "INPUT=%~1"
set "INPUT_NAME=%~n1"
set "OUTPUT_DIR=%~dp1"
set "OUTPUT=%OUTPUT_DIR%%INPUT_NAME%-audio.wav"

ffmpeg -f s16le -ar 44100 -ac 2 -i "%INPUT%" "%OUTPUT%"
REM D:\Projects\DS9.LaserDisc.Upscale\software\vhs-decode\build\tools\efm-decoder\tools\efm-decoder-audio "%INPUT%" "%OUTPUT%"

echo.
echo ============================================================
echo Decode complete: %OUTPUT%
echo ============================================================
pause
