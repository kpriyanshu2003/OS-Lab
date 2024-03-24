# 22053178 - Kumar Priyanshu

meters="$1"
centimeters=$(echo "$meters * 100" | bc)
kilometers=$(echo "$meters / 1000" | bc -l)

echo "Distance in meters: $meters"
echo "Distance in centimeters: $centimeters"
echo "Distance in kilometers: $kilometers"
