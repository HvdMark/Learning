# Just a few commands to perform some daily tasks


# Checking Disk Space
Get-PSDrive

# Restarting the Print Spooler service
# Will give an error when not running as admin
Restart-Service -Name "Spooler"

# Clearing temporary files
Remove-Item -Path "C:\Windows\Temp\*" -Recurse
