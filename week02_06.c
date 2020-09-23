#include <stdio.h>

int main (void){

  const int MAX = 100;
  const double PI = 3.1415;
  const double E = 2.7182;
  const int HELLO_WORLD = 1;

  printf("PI is %f\n",PI);
  PI = PI + 1;
  printf("PI is %f\n",PI);

  return 0;
}
