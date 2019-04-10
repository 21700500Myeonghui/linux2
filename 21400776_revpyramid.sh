#! /bin/bash
echo "enter value for n"

read n
if(( "$n" >= "1" )) && (( "$n" <= "12" )); then

for (( i = n; i > 0; i-- ))
do

for (( j = 0; j <= n-i ; j++ ))

do

    echo -ne " "

done


for (( j = 1; j <= 2 * i - 1; j++ ))

do

    echo -ne "*"

done


echo " "

done

else

	echo "input is a inteager that between 1 - 12 "
fi
