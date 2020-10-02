#include <stdio.h>

int main (void){

  int num = 1;
  while(num < 6){
    printf("num is %d\n",num);
    num++; //후위 연산자
  }

  return 0;
}
