#include <stdio.h>

int main (void){
  int num;
  printf("정수 중 하나 입력 : ");
  scanf("%d",&num);

  if(num == 1){
    printf("1이 입력되었습니다.\n");
  }
  if(num > 1){
    printf("1보다 큰 수가 입력되었습니다.\n");
  }
  if(num < 1){
    printf("1보다 작은 수가 입력되었습니다.\n");
  }

  return 0;
}
