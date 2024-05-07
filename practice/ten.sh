1// Take array input

echo "Enter three number : "
read -a num
sum=$(expr ${num[0]} + ${num[1]} + ${num[2]})
echo $sum
