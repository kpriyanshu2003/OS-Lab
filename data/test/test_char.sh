# 22053178 - Kumar Priyanshu
char=$1

case "$char" in
[A-Z])
    echo "$char is an uppercase letter."
    ;;
[a-z])
    echo "$char is a lowercase letter."
    ;;
[0-9])
    echo "$char is a digit."
    ;;
*)
    echo "$char is a special character."
    ;;
esac
