echo "Enter a number "
read a

if [ "$a" -eq 0 ]; then
    echo "PID"
else
    echo "Invalid"
fi

echo "Enter another number : "
read b

case "$b" in
[0-9])
	echo "Is a digit"
	;;
[A-Z])
	echo "Uppercase Letter"
	;;
[a-z])
	echo "Lowercase Letter"
	;;
*)
	echo "HEHE"
	;;
esac
