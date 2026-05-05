# Minesweeper Build Instructions

## Prerequisites
- Visual Studio 2022 with C++ development workload
- Windows 10/11 SDK
- DirectX End-User Runtime

## Building the Project

1. Open the solution file `Minesweeper.sln` in Visual Studio 2022
2. Select the desired configuration (Debug or Release) and platform (x64)
3. Build the solution using Build → Build Solution

## Project Structure
- `src/` - Contains all source files from the decompilation
- `bin/` - Output directory for compiled binaries
- `obj/` - Intermediate build files

## Configuration
- Target Platform: x64
- Windows SDK: 10.0
- C++ Standard: C++17
- Character Set: Unicode
- Runtime Library: Multi-threaded DLL (Release) / Multi-threaded Debug DLL (Debug)

## Dependencies
- DirectX 9 (d3d9.lib, dxguid.lib)
- Windows Multimedia (winmm.lib)
- GDI+ (gdiplus.lib)
- ATL (atlthunk.lib)
- Standard Windows libraries

## Notes
- This is a decompilation of Windows 7 Minesweeper
- The project contains 1156 source files
- The code uses ATL and DirectX for rendering and UI
- Build artifacts will be generated in the `bin` and `obj` directories