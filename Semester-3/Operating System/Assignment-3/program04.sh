echo "Enter Number :"
read num

cal=` expr $num % 2 `

if [ $cal == 0 ]
then
    echo "$num Is Even Number"
else
    echo "$num Is Odd Number"
fi