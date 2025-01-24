import string_operations as str_opr

str = input("Enter Your Sentence : ")

print(f"Reversed String  : {str_opr.reverse_string(str)}")
print(f"Number Of Vowels : {str_opr.count_vowels(str)}")
print(f"Palidrom Or Not  : {str_opr.is_palindrom(str)}")