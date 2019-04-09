#! /bin/bash

echo -ne  "n = "
read n

pp=0;
p=0;
c=1;
for(( i = 2; i <= n; i ++ ))
do
pp=$p;
p=$c;
c=$((pp+p));
done
echo "fib($n) = $c"
