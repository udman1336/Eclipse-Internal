param (
    [string]$OutputFilePath
)

# Define the path to the sign.bat file
$SignBatPath = Join-Path -Path $PSScriptRoot -ChildPath "Cert\sign.bat"

# Check if the target file exists
if (-Not (Test-Path $OutputFilePath)) {
    Write-Error "Target file does not exist: $OutputFilePath"
    exit 1
}

# Run the signing batch file with the output file path as an argument
Write-Host "Signing file: $OutputFilePath using $SignBatPath"
& $SignBatPath $OutputFilePath