#include <stdio.h>

int main (void){

  float numf = 1.0;
  double numd = 1.0;
  long double numld = 1.0;

  printf("size of %s is %lu\n","char" , sizeof(char));
  printf("size of %s is %lu\n","short", sizeof(short));
  printf("size of %s is %lu\n","int" ,sizeof(int));
  printf("size of %s is %lu\n","long" ,sizeof(long));
  //이 컴파일러에서만 8로 나온다.
  printf("size of %s is %lu\n","long long" ,sizeof(long long));
  printf("size of %s is %lu\n","float" ,sizeof(numf));
  printf("size of %s is %lu\n","double" ,sizeof(numd));
  printf("size of %s is %lu\n","long double" ,sizeof(numld));
  return 0;
}
