echo "Enter First Number : "
read num1

echo "Enter Second Number : "
read num2

echo "Addition       = " `expr $num1 + $num2`
echo "Subtraction    = " `expr $num1 - $num2`
echo "Multiplication = " `expr $num1 \* $num2`
echo "Divison        = " `expr $num1 / $num2`