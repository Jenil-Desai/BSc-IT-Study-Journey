echo "Enter A Number : "
read num

sum=0

while [ $num != 0 ]
do
	rm=$(( num % 10 ))
	sum=$(( sum + rm ))
	num=$(( num / 10 ))
done

echo $sum
