#include <stdio.h>

int main(void) {
   double num1  //double형 선언 ,
  num1 = 245; // 초기화
   int num2 = 3.1415;
   int num3 = 129; char ch = num3;
   double num5 = 5.15 + 19; //자료형 불일치로 인한 자동 형변환
   int num6 = 3.424 + 244;
   printf("정수 245를 실수로: %f\n", num1);
   printf("실수 3.1415를 정수로: %d\n", num2);
   printf("큰 정수 129를 작은 정수로: %d\n", ch);
   printf("자료형 불일치로 인한 자동 형변환: %f\n", num5);
   printf("자료형 불일치로 인한 자동 형변환: %d\n", num6);
   return 0;
}
