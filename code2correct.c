#include <stdio.h>

// To count 10000000 using a while loop
int main(void){
  int count = 0;

  int is_looping = 1; // sentinel for while()
  while(is_looping == 1){
// change is_looping = 1 >> is_looping == 1
// '=' operator means directly assignment
// '==' operator means relation is same
//if 'is_looping =1', while loop will contenue infinitely like while(1) loop
//but 'is_looping == 1' means that if count is lower than 10000000, loop continue.
//count become 10000001, is_looping become 0 and loop end.
    count++;
    if(count > 10000000)  is_looping = 0;
  }

  printf("count=%d\n", count);

  return 0;
}
