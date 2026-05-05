# CMake Build Instructions

## Prerequisites
- CMake 3.20 or higher
- Visual Studio 2022 (if building on Windows)
- Windows 10/11 SDK
- DirectX End-User Runtime

## Building with CMake

1. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```

2. Generate build files:
   ```bash
   cmake -G "Visual Studio 17 2022" -A x64 ..
   ```

3. Build the project:
   ```bash
   cmake --build . --config Debug
   ```

4. Run the executable:
   ```bash
   ./bin/Debug/Minesweeper.exe
   ```

## Build Configurations

- Debug: Debug build with full symbols
- Release: Optimized build without symbols
- RelWithDebInfo: Release build with symbols
- MinSizeRel: Minimum size release build

## Cross-Platform Notes

This CMake configuration is primarily designed for Windows due to the DirectX dependencies. For other platforms, you would need to use alternative graphics libraries and modify the CMakeLists.txt accordingly.