import re

def search_string(input_string):
    pattern = r'^m..$'
    
    match = re.search(pattern, input_string)
    
    if match:
        print(f"Match found: {match.group()}")
    else:
        print("No match found.")

test_strings = ["mad", "map", "mop", "m", "mo", "mango", "m1a", "m2b"]
for test in test_strings:
    print(f"Testing '{test}':")
    search_string(test)