text = "Hello! This is a sample text, with some punctuation marks. How are you?"
punc = "."

for char in text:
    if char in punc:
        text = text.replace(char, "")
print(text)