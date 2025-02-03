try:
    file = open("file.txt", "r")
    print(file.read())
except :
    print("Error While Reading File")
finally:
    try:
        file.close()
    except NameError:
        pass