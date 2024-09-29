echo "Enter base: "
read base

echo "Enter Exponenet: "
read exp

result=1

for ((i=1; i<=exp; i++))
do
    result=$((result * base))
done

echo "$base^$exp = $result"