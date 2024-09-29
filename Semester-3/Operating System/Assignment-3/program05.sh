echo "Enter 1st Number :"
read num1

echo "Enter 2nd Number :"
read num2

echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Divison"
echo "Enter Operations Choice :"
read ch

if [ $ch == 1 ]
then
    echo "Addition = " `expr $num1 + $num2`
elif [ $ch == 2 ]
then
    echo "Subtraction = " `expr $num1 - $num2`
elif [ $ch == 3 ]
then
    echo "Multiplication = " `expr $num1 \* $num2`
elif [ $ch == 4 ]
then
    echo "Divison = " `expr $num1 / $num2`
else
    echo "Invalid Operation Choice"
fi