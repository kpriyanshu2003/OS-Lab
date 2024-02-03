echo "Enter a number : "
read num
if [ $num -gt 0 ]
then
	echo "It is a positive number"
elif [ $num -lt 0 ]
then
	echo "It is a negative number"
else
	echo "The number is zero"
fi
