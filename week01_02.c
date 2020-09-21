#include <stdio.h>
//자료형
//정수형 실수형 문자 문자열 불형(boolean)(bool) (1 or 0)
//
int main (void){
    
    int num = 10;
    float fnum = 10.2344;
    double dnum = 5.344;
    
    printf("num = %d\n",num);
    printf("fnum = %f\n",fnum);
    printf("dnum = %f\n",dnum);
    
    char ch1 = 'A';
    char str1[] = "Hello World";
    
    printf("ch1 = %c\n",ch1);
    printf("str1 = %s\n",str1);
    
    int numA = 5, numB = 3;
    float ans = numA/numB;
    //1.6666666
    // 5/3 = Q = 1, R = 2
    
    printf("numA / numB = %f \n",ans);
    
    int rest = numA % numB;
    
    printf("rest = %d\n",rest);
    
    return 0;
}
