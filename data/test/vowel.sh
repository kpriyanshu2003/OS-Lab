# 22053178 - Kumar Priyanshu

char=$1

case $char in
[aeiouAEIOU]) echo "$char is a vowel" ;;
*) echo "$char is not a vowel" ;;
esac
