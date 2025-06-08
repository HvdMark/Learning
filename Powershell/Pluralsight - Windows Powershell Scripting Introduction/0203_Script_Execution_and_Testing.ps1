# Just a few commands to perform some daily tasks
################################################################################
$tempPath = "C:\Windows\Temp\*"
$spoolerService = "Spooler"
try {

    # Checking Disk Space
    $diskSpace = Get-PSDrive

    # Restarting the Print Spooler service
    # Will give an error when not running as admin
    Restart-Service -Name $spoolerService -ErrorAction Stop
    $spoolerStatus = Get-Service -name $spoolerService | Select-Object Status

    # Clearing temporary files
    Remove-Item -Path $tempPath -Recurse

    [PSCustomObject]@{
        DiskSpace            = $diskSpace
        SpoolerServiceStatus = $spoolerStatus
        TempFilesCleared     = $tempFilesRemaining.Count -eq 0
    }
   
}
catch {
    Write-Host $_.Exception.Message
}

################################################################################

