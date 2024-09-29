echo "Enter a number: "
read num
    
if (( num > 100 ))
then
    echo "Greater than 100"
elif (( num > 50 ))
then
    echo "Greater than 50"
else
    echo "Less than or equal to 50"
fi