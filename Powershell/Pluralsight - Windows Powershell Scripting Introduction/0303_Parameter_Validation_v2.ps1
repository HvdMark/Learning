param
    (
        [Parameter()]
        [ValidateRange(1,12)]
        [int]$Month,
        [string]$AccountType
    )

# Placeholder for the script's main functionalitty
# This part of the script is where the data analyses woulf typically happen
# For this demo, we'll just output the provided parameters

try 
    {
        $availableReports = @{
            'Expense' = @{
                4 = 'some uber sensitive stuff here for April'
            }
        }
        Write-Host "Analyzing financial data for Month: $Month and Account Type: $AccountType"
        Write-Host "-----"
        Write-Host "Report: $($availableReports[$AccountType][$Month])"
        Write-Host "-----"

        Write-Host "Data analyses complete"
    }
catch 
    {
        Write-Host "Error in data analysis: #_"
    }