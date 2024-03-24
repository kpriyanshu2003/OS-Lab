echo "Enter three numbers : "
read -a num
sum=$(expr ${num[0]} + ${num[1]} + ${num[2]})
avg=$(echo $sum / 3 | bc -l)
echo $avg
