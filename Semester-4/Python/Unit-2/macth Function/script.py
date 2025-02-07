import re
str1=input("Enter string -->")
ans=re.match("[a-z]",str1)
if ans!=None:
    print("valid")
else:
    print("Invalid")