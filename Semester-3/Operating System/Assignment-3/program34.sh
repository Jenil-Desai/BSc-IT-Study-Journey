echo "Enter 1st numbers: "
read a

echo "Enter 2nd numbers: "
read b

echo "Enter 3rd numbers: "
read c

if (( a > b && a > c ))
then
    echo "$a is the largest"
elif (( b > c ))
then
    echo "$b is the largest"
else
    echo "$c is the largest"
fi