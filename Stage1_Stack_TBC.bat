@echo off
REM Stage 1: Stack multiple .tbc files
REM Usage: Drag multiple .tbc files onto this script
REM Output: stacked.tbc in same folder as first input

if "%~1"=="" (
    echo Drag .tbc files onto this script to stack them
    pause
    exit /b
)

REM Get output folder from first file
set "OUTPUT_DIR=%~dp1"
set "OUTPUT=%OUTPUT_DIR%stacked.tbc"

echo.
echo ============================================================
echo Stage 1: Stacking TBC files
echo ============================================================
echo.
echo Output: %OUTPUT%
echo.
echo Input files:

REM Build input list
set "INPUTS="
:loop
if "%~1"=="" goto process
echo   - %~nx1
set "INPUTS=%INPUTS% "%~1""
shift
goto loop

:process
echo.
echo Starting ld-disc-stacker...
echo.

ld-disc-stacker%INPUTS% -o "%OUTPUT%"

echo.
echo ============================================================
echo Stacking complete: %OUTPUT%
echo.
echo Next: Run Stage 2 (chroma decode) with stacked.tbc
echo You can delete the original .tbc files to save space.
echo ============================================================
pause
