echo "Enter number of rows: "
read n
for ((i=1; i<=n; i++))
do
    for ((j=1; j<=i; j++))
    do
        printf "* "
    done
    printf "\n"
done