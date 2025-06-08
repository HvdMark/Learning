import json
import sys

# Filename with current path
filename = sys.path[0] + "\\data.json"


# Python dictionary to be encoded to JSON
data = {
    "number": 4,
    "students": [
        {"name": "Sarah Holderness", "email": "sarah@example.com"},
        {"name": "Harry Potter", "email": "harry@example.com"},
        {"name": "Hermione Granger", "email": "hermione@example.com"},
        {"name": "Ron Weasley", "email": "ron@example.com"},
    ],
}


# Write dictionary to JSON file
with open(filename, "w", encoding="utf-8") as f:
    json.dump(data, f, ensure_ascii=False, indent=4)

# Clearing the data
data.clear

# Reading JSON from file to dictionary
with open(filename, "r", encoding="utf-8") as f:
    data = json.load(f)

# Print it
print("Students emails:")
for i in data["students"]:
    print(i["name"])
