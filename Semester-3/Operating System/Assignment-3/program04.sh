echo "Enter Number :"
read num

if [ $num % 2 -eq 0 ]
then
    echo $num "Is Even Number"
else
    echo $num "Is Odd Number"
fi