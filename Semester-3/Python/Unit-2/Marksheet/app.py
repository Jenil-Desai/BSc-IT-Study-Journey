subjects = {
    "Physics": 0,
    "Chemistry": 0,
    "Biology": 0
}

total = 0

for key,value in subjects.items():
    mark = int(input(f"Enter Marks Of {key} : "))
    subjects[key] = mark
    total = total + mark

percentage = total/len(subjects.keys())

if percentage >= 70:
    print("Distinction")
elif percentage >= 60:
    print("First Class")
elif percentage >= 50:
    print("Second Class")
elif percentage >= 40:
    print("Pass Class")
else:
    print("Fail")