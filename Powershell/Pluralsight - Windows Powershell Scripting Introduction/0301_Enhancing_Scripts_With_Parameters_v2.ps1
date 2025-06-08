# Default script to load HR report

param(
    $ReportType,
    $StartDate,
    $EndDate
)

# The report name as the report type, start and end date
$reportPath = "c:\temp\Attendance_2023-01-01_to_2023-01-31.csv"

# Retrieving the content of the report
Import-Csv -Path $reportPath