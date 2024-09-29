echo "Enter file name: "
read filename
    
if [ -f "$filename" ]
then
    echo "File exists"
else
    echo "File does not exist"
fi