#include <stdio.h>

int main (void){

  char ch1 = 'A'; char ch2 = 65;
  char ch3 = 'Z'; char ch4 = 90;

  printf("%c %d\n",ch1,ch1);
  printf("%c %d\n",ch2,ch2);
  printf("%c %d\n",ch3,ch3);
  printf("%c %d\n",ch4,ch4);

//컴퓨터는 문자를 문자가 아닌 0과 1로 저장한다.
//그리고 65와 A를 저장할때 1000001로 같은 숫자로 저장한다
//출력할때 %c로 출력하면 ASCII 코드 규칙에 의해 A 가 출력되고
//%d로 출력하면 int로 인식해서 정수인 65로 출력한다.

  return 0;
}
