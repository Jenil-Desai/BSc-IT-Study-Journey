def reverse_string(str: str):
    return str[::-1]

def count_vowels(str: str):
    vowels = "aeiou"
    return sum(1 for char in str.lower() if char  in vowels)

def is_palindrom(str:str):
    str = str.lower().replace(" ","")
    return str == str[::-1]