# 22053178 - Kumar Priyanshu

num=2
while [ $num -le 100 ]; do
    prime=true
    i=2
    while [ $i -le $(($num / 2)) ]; do
        if [ $(($num % $i)) -eq 0 ]; then
            prime=false
            break
        fi
        i=$(($i + 1))
    done
    if [ "$prime" = true ]; then
        echo -n "$num "
    fi
    num=$(($num + 1))
done
