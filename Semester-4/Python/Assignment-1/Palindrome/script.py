def is_palindrome(s):
    return s == s[::-1]

word = input("Enter Single Word")
print(f"{word} is a palindrome: {is_palindrome(word)}")