# 22053178 - Kumar Priyanshu

yr="$1"
if [ $(expr $yr % 4) -eq 0 -a $(expr $yr % 100) -ne 0 -o $(expr $yr % 400) -eq 0 ]; then
    echo "It is a leap year"
else
    echo "It is not a leap year"
fi
