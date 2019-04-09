#include <stdio.h>

// To compare the sum of i and sum of i*i (square) where i = 1, ..., 10
int main(void){
  int i = 0;
  int sum1 = 0, sum2 = 0;

  for(i = 0; i <= 10; i++){ // for(i=0; i<=10;i++) >> for(i=0; i<=10;i++){}
// for loop need braket
    sum1 += i;
    sum2 += i*i;
  }
  printf("sum1=%d; sum2=%d\n", sum1, sum2);

  return 0;
}
