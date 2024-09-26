echo "Enter Marks Of Subject 1 :"
read sub1

echo "Enter Marks Of Subject 2 :"
read sub2

echo "Enter Marks Of Subject 3 :"
read sub3

total=`expr $sub1 + $sub2 + $sub3`
per=`expr $total / 3`

echo "Total : " $total
echo "Percentage : " $per
