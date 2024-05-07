#!/bin/bash

echo "Name: Kumar Priyanshu         Roll No: 22053178"
# Define the factorial function
factorial() {
    if [ $1 -le 1 ]; then
        echo 1
    else
        echo $(($1 * $(factorial $(($1 - 1)))))
    fi
}

# Store the original number
number=$1

# Store the original number in a temporary variable
temp=$number

# Variable to store the sum of factorials of digits
sum=0

# Loop to calculate the sum of factorials of digits
while [ $temp -gt 0 ]; do
    digit=$(($temp % 10))               # Extract the last digit
    sum=$(($sum + $(factorial $digit))) # Add factorial of digit to sum
    temp=$(($temp / 10))                # Remove the last digit
done

# Check if the number is a strong number
if [ $sum -eq $number ]; then
    echo "$number is a strong number."
else
    echo "$number is not a strong number."
fi
