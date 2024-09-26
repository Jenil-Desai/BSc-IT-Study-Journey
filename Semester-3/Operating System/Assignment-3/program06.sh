echo "Enter First Sentence :"
read str1

echo "Enter Second Sentence :"
read str2

if [ $str1 == $str2 ]
then
    echo "Both Sentence Are Same"
else
    echo "Both Sentence Are Different"
fi