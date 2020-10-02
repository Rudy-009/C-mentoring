#include <stdio.h>

int main (void){
  int num = 0, sum = 0;
  do{
    printf("정수 입력(0 to quit) : ");
    scanf("%d",&num);
    sum += num;
  }while(num != 0);
  printf("합계 : %d ",sum);
  return 0;
}
