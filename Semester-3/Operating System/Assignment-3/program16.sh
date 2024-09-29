echo "Enter a number (1-3): "
read num
    
case $num in
    1) echo "You chose 1";;
    2) echo "You chose 2";;
    3) echo "You chose 3";;
    *) echo "Invalid choice";;
esac