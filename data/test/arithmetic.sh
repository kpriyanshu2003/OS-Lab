# 22053178 - Kumar Priyanshu

num1="$1"
num2="$2"

addition=$(echo "$num1 + $num2" | bc)
subtraction=$(echo "$num1 - $num2" | bc)
multiplication=$(echo "$num1 * $num2" | bc)
division=$(echo "scale=2; $num1 / $num2" | bc)

# Display results
echo "Addition : $addition"
echo "Subtraction : $subtraction"
echo "Multiplication : $multiplication"
echo "Division : $division"
