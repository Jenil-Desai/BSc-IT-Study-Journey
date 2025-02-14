import re

def match_string(s):
    pattern = r'^m..$'
    
    if re.match(pattern, s):
        return True
    else:
        return False
test_strings = ['mad', 'map', 'mop', 'm', 'mouse', 'm1a', 'm12']

for string in test_strings:
    if match_string(string):
        print(f"'{string}' matches the pattern.")
    else:
        print(f"'{string}' does not match the pattern.")