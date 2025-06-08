# Make directories / list files / move files
import os

# Get current folder + Cleanup folder
cleanup_folder = os.getcwd() + "\\CleanedUp"
# Check if it exists
if not os.path.exists(cleanup_folder):
    # if not, create the folder CleanedUp
    os.mkdir(cleanup_folder)

# Get current folder
folder = os. getcwd()
# List the files in current folder
entries = os.scandir(folder)

for entry in entries:                                               # Loop through all entries
    if os.path.isfile(entry):
        # print if entry is a file
        print("File:", entry.name)
    elif os.path.isdir(entry):
        # print if entry is a folder
        print("Directory:", entry.name)

# Current folder where script is stored
folder_original = os.getcwd()
# Destination folder
folder_destination = os.getcwd() + "\\CleanedUp"

# Create an absolute path for the source file
location_original = os.path.join(folder_original, "new.txt")
# Create an absolute path for the destination file
location_destination = os.path.join(folder_destination, "new.txt")

# move the file with the rename function
os.rename(location_original, location_destination)
