import json

# Python dictionary to be decoded from JSON
json_data = {"name": "John Doe", "age": 30, "city": "New York"}

# Decode JSON to dictionary
data = json.dumps(json_data)

print("Decoded JSON", data)
