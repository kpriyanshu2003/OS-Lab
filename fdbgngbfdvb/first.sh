num=$1
num1=$1
sum=0

while [ $num1 -gt 0 ]; do
    fact=1
    d=$(expr $num1 % 10)
    if [ $fact -eq 0 ]; then
        fact=1
    elif [ $fact -eq 1 ]; then
        fact=1
    else
        while [ $d -gt 0 ]; do
            fact=$(expr $fact \* $d)
            d=$(expr $d - 1)
        done
    fi
    sum=$(expr $sum + $fact)
    num1=$(expr $num1 / 10)
done

if [ $num -eq $sum ]; then
    echo "$num is a strong number."
else
    echo "$num is not a strong number."
fi
