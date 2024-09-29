echo "Enter a number: "
read n

a=0
b=1

echo "Fibonacci series: "
for (( i=0; i<n; i++ ))
do
    echo "$a"
    fn=$((a + b))
    a=$b
    b=$fn
done