echo "Enter House Price :"
read price

hra=$(( price * 20 / 100 ))
da=$(( price * 40 / 100 ))
pf=$(( price * 10 / 100 ))

total_value=$(( price + hra + da - pf ))

echo "======================"
echo "Pay List | Pay Slip"
echo "======================"

echo "House Price          : "$price
echo "House Rent Allowance : "$hra
echo "Dearness Allowance   : "$da
echo "Provident Fund       : "$pf

echo "======================"
echo "Total Value          : "$total_value
echo "======================"