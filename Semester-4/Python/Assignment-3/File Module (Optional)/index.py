import file_utils as fu
file_path = "example.txt"

print("1. Write to File")
print("2. Append to File")
print("3. Read File")
choice = int(input("Choose an option: "))

if choice == 1:
    content = input("Enter content to write: ")
    print(fu.write_file(file_path, content))
elif choice == 2:
    content = input("Enter content to append: ")
    print(fu.append_to_file(file_path, content))
elif choice == 3:
    print("File Content: ")
    print (fu.read_file(file_path))
else:
    print("Invalid choice!")