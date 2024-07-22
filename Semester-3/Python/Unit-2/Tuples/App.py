techs = ('HTML','EJS','CSS','BootStrap','Tailwind','JavaScript','Node.js','Express.js','React.js','Next.js','Docker')

print(f"Index Of Express.js : {techs.index('Express.js')}")

print(f"Count Of Next.js : {techs.count('Next.js')}")

print(f"Minus Index Of Tuple : {techs[-1]}")

(silver,Gold,*Diamond) = techs
print(f"Unpacking : {silver}")
print(f"Unpacking : {Gold}")
print(f"Unpacking : {Diamond}")