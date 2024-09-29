echo "Enter 1st values: "
read a

echo "Enter 2nd values: "
read b

if [ "$a" == "$b" ]
then
    echo "Values are same"
else
    echo "Values are different"
fi
