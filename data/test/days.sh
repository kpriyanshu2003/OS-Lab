# 22053178 - Kumar Priyanshu

day_number="$1"

case "$day_number" in
1)
    echo "Sunday"
    ;;
2)
    echo "Monday"
    ;;
3)
    echo "Tuesday"
    ;;
4)
    echo "Wednesday"
    ;;
5)
    echo "Thursday"
    ;;
6)
    echo "Friday"
    ;;
7)
    echo "Saturday"
    ;;
*)
    echo "Invalid day number: $day_number"
    ;;
esac
