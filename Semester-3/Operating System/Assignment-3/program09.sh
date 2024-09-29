echo "Enter Number : "
read num

if [ $num -lt 0 ]
then
    echo "Number Is Negative"
elif [ $num -gt 0 ]
then
    echo "Number Is Positive"
else
    echo "Number Is Zero"
fi