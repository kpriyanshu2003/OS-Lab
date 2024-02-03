echo "Enter three numbers : "
read a b c
sum=$(expr $a + $b + $c)
avg=$(echo $sum / 3 | bc -l)
echo $avg
