echo "Enter File Name To Delete :"
read fileName

echo "Are You Sure"
read confirm

if [ $confirm = "yes" ]
then
    rm $fileName
    echo "File Deleted Successfully"
else
    echo "File Not Deleted"