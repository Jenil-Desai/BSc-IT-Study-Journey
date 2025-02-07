try:
    a = 10
    b = 0
    c = a / b
    print(c)
except Exception as e:
    print("Error : ",e)
else:
    print("Else Part")
finally:
    print("Runs Everytime")