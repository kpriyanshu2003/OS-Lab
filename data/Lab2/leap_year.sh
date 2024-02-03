echo "Enter a year : "
read yr
if [ `expr $yr % 4` -eq 0 ]
then
	echo "It is a leap year"
else
	echo "It is not a leap year"
fi
