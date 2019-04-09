#include <stdio.h>

// To obtain the summation from 1 to 10
int main(void){
  int sum = 0;
  int i;

  for(i = 1; i <= 10; i++){ //  for(); >> for() {sum+= i};
// for loop need braket
    sum += i;
  }
  printf("sum=%d\n", sum);

  return 0;
}
