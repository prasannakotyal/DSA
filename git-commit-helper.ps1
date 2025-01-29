# Simple commit message validator
function Validate-Commit {
    param([string]$MessageFile)

    if (-not $MessageFile) {
        Write-Host "Error: No commit message file provided."
        exit 1
    }

    if (-not (Test-Path $MessageFile)) {
        Write-Host "Error: Commit message file does not exist: $MessageFile"
        exit 1
    }

    # Read the commit message
    $message = Get-Content $MessageFile -Raw

    # Get first line (subject)
    $subject = ($message -split "`n")[0]

    # Simple checks
    if ($subject.Length -gt 50) {
        Write-Host "Error: Subject line is too long (max 50 characters)"
        Write-Host "Current length: $($subject.Length)"
        exit 1
    }

    if (-not $subject.StartsWith("feat:") -and 
        -not $subject.StartsWith("fix:") -and 
        -not $subject.StartsWith("docs:") -and 
        -not $subject.StartsWith("style:") -and 
        -not $subject.StartsWith("refactor:") -and 
        -not $subject.StartsWith("test:") -and 
        -not $subject.StartsWith("chore:")) {
        Write-Host "Error: Commit message must start with type (feat:, fix:, docs:, style:, refactor:, test:, chore:)"
        exit 1
    }

    # If we get here, all checks passed
    exit 0
}

# Run the validation
if ($args.Count -eq 0) {
    Write-Host "Error: No commit message file provided."
    exit 1
}

Validate-Commit -MessageFile $args[0]
