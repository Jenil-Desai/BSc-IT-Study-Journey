def words_to_digits(word):
    word_to_digit = {
        "zero": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9,
        "ten": 10
    }
    return word_to_digit.get(word.lower(), "Invalid input")

word = input("Enter a number in words (e.g., 'one', 'two', 'three'): ")
digit = words_to_digits(word)
print(f"The digit for '{word}' is: {digit}")