# Default script to load HR report

param(
    $ReportType,
    $StartDate,
    $EndDate
)

# The report name as the report type, start and end date

# This was in the lab but doesn't work
#$reportPath = "c:\temp\$ReportType`_$StartDate`to_$EndDate.csv"

$reportPath = "c:\temp\${ReportType}_${StartDate}_to_${EndDate}.csv"

# Retrieving the content of the report
Import-Csv -Path $reportPath