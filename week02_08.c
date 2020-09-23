#include <stdio.h>

int main(void) {
   int num1 = 3, num2 = 4;
   double divResult, divResult2;
   divResult = num1 / num2;
   printf("나눗셈 결과: %f\n", divResult);
   divResult2 = (double)num1 / num2;
   printf("나눗셈 결과: %f\n", divResult2);
   return 0;
}
