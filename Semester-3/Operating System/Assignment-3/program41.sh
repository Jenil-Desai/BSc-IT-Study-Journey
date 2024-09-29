echo "Enter a 5-digit number: "
read num
    
num=$(echo $num | sed 's/./& /g')

set -- $num

echo "Digits in odd positions: $1 $3 $5"