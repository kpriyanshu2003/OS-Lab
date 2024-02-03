echo "Enter radius of circle : "
read r
area=`echo 3.14 \* $r \* $r | bc -l`
peri=`echo 2 \* 3.14 \* $r | bc -l`
echo "Area : $area	Perimeter : $peri"
