param (
    [string]$Directory = (Get-Location).Path  # Default to the current directory
)

# Function to display and confirm deletion
function Remove-ExeFiles {
    param (
        [string]$TargetDirectory
    )

    # Check if the directory exists
    if (-not (Test-Path -Path $TargetDirectory)) {
        Write-Host "Error: Directory '$TargetDirectory' does not exist." -ForegroundColor Red
        return
    }

    # Navigate to the directory
    Set-Location -Path $TargetDirectory

    # Get .exe files (case-insensitive)
    $exeFiles = Get-ChildItem -Recurse -Filter "*.exe"

    if ($exeFiles.Count -eq 0) {
        Write-Host "No .exe files found in '$TargetDirectory'." -ForegroundColor Yellow
        return
    }

    # Preview the files
    Write-Host "The following .exe files will be deleted:" -ForegroundColor Cyan
    $exeFiles | ForEach-Object { Write-Host $_.FullName -ForegroundColor White }

    # Ask for confirmation
    $response = Read-Host "Do you want to delete these files? (yes/no)"

    if ($response -match "^(yes|y)$") {
        # Delete the files
        $exeFiles | Remove-Item -Force
        Write-Host "All .exe files have been deleted." -ForegroundColor Green
    } else {
        Write-Host "Operation cancelled. No files were deleted." -ForegroundColor Yellow
    }
}

# Call the function with the provided directory
Remove-ExeFiles -TargetDirectory $Directory
