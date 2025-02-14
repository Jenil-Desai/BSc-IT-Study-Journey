def read_file(file_path):
    try:
        file = open(file_path, 'r')
        print(file.read())
    except FileNotFoundError:
        print("Error: File not found.")
    finally:
        try:
            file.close()
            print("File closed.")
        except NameError:
            print("File was never opened.")

read_file("example.txt") 