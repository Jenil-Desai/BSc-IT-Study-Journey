techs = ['HTML','EJS','CSS','BootStrap','Tailwind','JavaScript','Node.js','Express.js','React.js','Next.js','Docker']

techs.append('Kubernetes')
print(f"List After Append : {techs}")

techs.insert(0,"C-Language")
print(f"List After Insert : {techs}")

new_techs = ["GitHub",'Git']
techs.extend(new_techs)
print(f"List After Extend : {techs}")

techs.pop()
print(f"List After Pop : {techs}")

techs.sort()
print(f"List After Sort : {techs}")

techs.reverse()
print(f"List After Reverse : {techs}")

print(f"Count Of Tailwind : {techs.count("Tailwind")}")

techs.remove("Node.js")
print(f"List After Count : {techs}")

techs.clear()
print(f"List After Clear : {techs}")