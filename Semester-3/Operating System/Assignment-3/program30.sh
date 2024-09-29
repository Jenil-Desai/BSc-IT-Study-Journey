echo "Enter 1st numbers: "
read a

echo "Enter 2nd numbers: "
read b
    
echo "Choose operation (1 for AND, 2 for OR, 3 for NOT): "
read op
    
case $op in
    1) if (( a && b ))
    then
        echo "AND is true" 
    else 
        echo "AND is false" 
    fi
    ;;
    2) if (( a || b ))
    then
        echo "OR is true"
    else
        echo "OR is false"
    fi
    ;;
    3) if (( !a ))
    then 
        echo "NOT is true"
    else 
        echo "NOT is false"
    fi
    ;;
esac