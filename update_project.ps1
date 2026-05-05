# Script to add all source files to the project file
$projectFile = "Minesweeper.vcxproj"
$sourceFiles = Get-ChildItem -Path "src" -Filter "*.c" | ForEach-Object { '<ClCompile Include="src\\' + $_.Name + '" />' }

# Read the current project file
$projectContent = Get-Content $projectFile -Raw

# Find the position to insert the source files (after the WinMain.c entry)
$insertPosition = $projectContent.IndexOf('<ClCompile Include="src\WinMain.c" />')
if ($insertPosition -eq -1) {
    Write-Host "Could not find WinMain.c entry in project file"
    exit 1
}

# Insert the source files after WinMain.c
$insertPosition = $projectContent.IndexOf('</ClCompile>', $insertPosition) + '</ClCompile>'.Length
$newContent = $projectContent.Insert($insertPosition, "`n    " + ($sourceFiles -join "`n    "))

# Write the updated project file
$newContent | Set-Content $projectFile

Write-Host "Added $($sourceFiles.Count) source files to the project"