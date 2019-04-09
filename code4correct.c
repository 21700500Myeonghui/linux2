#include <stdio.h>
#define MACRO_FN(x) x*x+1

// To compute (a+b)*(a+b)+1 using a macro function
int main(void){
  int a = 3;
  int b = 2;

  int y = MACRO_FN((a+b));
// change MACRO_FN(a+b); >> MACRO_FN((a+b));
//if there are multi digits in x position
//then MACRO_FN read only first position number digit
//so we calculate a+b first
//and that value (val) will calculate in MACRO_FN(val)

  printf("y=%d\n", y);
  return 0;
}
