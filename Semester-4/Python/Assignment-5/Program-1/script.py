import random
import math
word = input("Enter Your Word : ")

for letter in word:
    try:
        file = open(f"word-{letter}-{math.ceil(random.randrange(100,200))}","w")
        try:
            file.write(letter)
        except Exception as error:
            print("Error While Writing File :",error)    
    except Exception as error:
        print("Error While Opening File :",error)