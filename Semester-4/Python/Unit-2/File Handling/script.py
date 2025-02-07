import os
import sys

class Aboutus:
    def __init__(self,fileName: str):
        self.file = fileName

    def create(self) -> str:
        try:
            file = open(self.file,"w")
            return "File {self.file} Created Successfully"
        except Exception as e:
            return "[Error] : While Creating File : " + e
        finally:
            file.close()
        
    def write(self,content: str) -> str:
        try:
            file = open(self.file,"w")
            try:
                file.write(content)
                return "Successfully Content Written In File"
            except Exception as e:
                return "[Error] : While Writing In File : " + e
        except Exception as e:
            return "[Error] :  While Opening File : " + e
        finally:
            file.close()

    def write(self, content: list[str]) -> str:
        try:
            file = open(self.file,"w")
            try:
                file.writelines(content)
                return "Successfully Content Written In File"
            except Exception as e:
                return "[Error] : While Writing In File : " + e
        except Exception as e:
            return "[Error] :  While Opening File : " + e
        finally:
            file.close()

    def read(self) -> str:
        try:
            file = open(self.file,"r")
            try:
                return file.read()
            except Exception as e:
                return "[Error] : While Reading File : " + e    
        except Exception as e:
            return "[Error] : While Opening File : " + e
        finally:
            file.close()

    def append(self, content: str) -> str:
        try:
            file = open(self.file,"a")
            try:
                file.write(content)
                return "Successfully Content Appending In File"
            except Exception as e:
                return "[Error] : While Appending In File : " + e                
        except Exception as e:
            return "[Error] : While Opening File : " + e
        finally:
            file.close()

    def delete(self) -> str:
        try:
            os.remove(self.file)
            return "[Success] : File Removed Successfully"
        except Exception as e:
            return "[Error] : While Deleting File : " + e

file = input("Enter File Name With Extenstion : ")
obj = Aboutus(fileName=file)

while True:
    print("\n1). Create File")
    print("2). Write File")
    print("3). Append File")
    print("4). Read File")
    print("5). Delete File")
    print("6). Exit")
    
    choice = int(input("Enter Your Choice : "))

    match choice:
        case 1:
            res = obj.create()
            print(res)
        case 2:
            content = input("Enter File Content : ")
            res = obj.write(content)
            print(res)
        case 3:
            content = input("Enter File Content : ")
            res = obj.append(content)
            print(res)
        case 4:
            print(obj.read())
        case 5:
            res = obj.delete()
            print(res)
        case 6:
            sys.exit(0)
        case _:
            print("Invalid Choice")