curr_date=$(date +"%H")


if [ "$curr_date" -lt 12 ]
then
	echo "Good Afternoon"
elif [ "$curr_date" -lt 18 ]
then
	echo "Good Evening"
else
	echo "Good Morning"
fi
