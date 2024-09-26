echo "Enter a Number :"
read num

if [ $((num % 2)) == 0  ]
then
	echo "It is Even"
else
	echo "It is Odd"
fi
