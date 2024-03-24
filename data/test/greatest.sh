# 22053178 - Kumar Priyanshu

max="$1"

if [ "$2" -gt "$max" ]; then
    max="$2"
fi

if [ "$3" -gt "$max" ]; then
    max="$3"
fi

echo "Greatest number: $max"
