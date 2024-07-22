person = {
    "Name": {
        "fname": "Paxton",
        "lname": "Bayer"
    },
    "Phone No": "(410) 418-2841",
    "Address": "300 Otho Plaza",
    "Company": "Kreiger, Ernser and Leannon",
    "Registered_at": 1721619229368
}

print(f"Simple : {person}")

print(f"Company : {person['Company']}")

print(f"Phone No : {person.get('Phone No')}")

print(f"Keys : {person.keys()}")

print(f"Values : {person.values()}")

print(f"Items : {person.items()}")