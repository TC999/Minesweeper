cmake_minimum_required(VERSION 3.20)
project(Minesweeper CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE}")

# Find required packages
find_package(OpenGL REQUIRED)

# Add only the main source file
set(SOURCES src/main.cpp)

# Create executable
add_executable(Minesweeper ${SOURCES})

# Set compiler definitions
target_compile_definitions(Minesweeper PRIVATE
    _CONSOLE
    UNICODE
    _UNICODE
)

# Set include directories
target_include_directories(Minesweeper PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)

# Add compile definitions for decompiled code
target_compile_definitions(Minesweeper PRIVATE
    _CRT_SECURE_NO_WARNINGS
    _CRT_NONSTDC_NO_DEPRECATE
    _HAS_EXCEPTIONS=0
    _ITERATOR_DEBUG_LEVEL=0
    _ALLOW_ITERATOR_DEBUG_LEVEL_MISMATCH
)

# Link libraries
target_link_libraries(Minesweeper PRIVATE
    d3d9
    dxguid
    winmm
    gdiplus
    kernel32
    user32
    gdi32
    winspool
    comdlg32
    advapi32
    shell32
    ole32
    oleaut32
    uuid
    odbc32
    odbccp32
)

# Set Windows subsystem
set_target_properties(Minesweeper PROPERTIES
    WIN32_EXECUTABLE TRUE
    LINK_FLAGS "/SUBSYSTEM:WINDOWS"
)

# Copy DLLs to output directory (if needed)
if(WIN32)
    add_custom_command(TARGET Minesweeper POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${CMAKE_SOURCE_DIR}/redist"
        $<TARGET_FILE_DIR:Minesweeper>
    )
endif()