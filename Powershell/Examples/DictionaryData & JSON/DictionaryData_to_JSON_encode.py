import json

# Python dictionary to be encoded to JSON
data = {"name": "John Doe", "age": 30, "city": "New York"}

# Encode Python dictionary to JSON
json_data = json.dumps(data)

print("Encoded JSON", json_data)
