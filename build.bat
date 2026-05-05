@echo off
echo Building Minesweeper project...

REM Set Visual Studio path (modify if needed)
set VS_PATH="C:\Program Files\Microsoft Visual Studio\2022\Community"

REM Call Developer Command Prompt
call "%VS_PATH%\Common7\Tools\VsDevCmd.bat"

REM Build the solution
echo Building Debug configuration...
msbuild Minesweeper.sln /p:Configuration=Debug /p:Platform=x64 /m

if %ERRORLEVEL% NEQ 0 (
    echo Build failed!
    pause
    exit /b 1
)

echo Build completed successfully!
echo Output: bin\x64\Debug\Minesweeper.exe

REM Optional: Build Release configuration
echo.
echo Building Release configuration...
msbuild Minesweeper.sln /p:Configuration=Release /p:Platform=x64 /m

if %ERRORLEVEL% NEQ 0 (
    echo Release build failed!
    pause
    exit /b 1
)

echo Release build completed successfully!
echo Output: bin\x64\Release\Minesweeper.exe

pause