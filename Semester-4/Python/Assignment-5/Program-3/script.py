try:
    file = open("file.txt","r")
    try:
        print(file.readlines())
    except Exception as error:
        print('Error While Reading File : ', error)    
except Exception as error:
    print('Error While Opening File : ', error)