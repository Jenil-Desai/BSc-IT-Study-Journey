echo "Enter a number: "
read num
   
reverse=$(echo $num | rev)

if [ $num == $reverse ]
then
    echo "$num is a palindrome"
else
    echo "$num is not a palindrome"
fi
