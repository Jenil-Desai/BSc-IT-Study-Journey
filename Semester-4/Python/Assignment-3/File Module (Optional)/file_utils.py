def read_file(file_path):
    with open(file_path, 'r') as file:
        return file.read()
    
def write_file (file_path, content): 
    with open (file_path, 'w') as file: file.write (content)
    return "File written successfully."

def append_to_file(file_path, content):
    with open(file_path, 'a') as file: file.write (content)
    return "Content appended successfully."