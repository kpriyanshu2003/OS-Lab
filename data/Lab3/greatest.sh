# WAP to find greatest of two numbers

if [ $1 -gt $2 ]; then
    echo $1 is greater than $2
elif [ $1 -lt $2 ]; then
    echo $2 is greater than $1
else
    echo $2 is equal to $1
fi
