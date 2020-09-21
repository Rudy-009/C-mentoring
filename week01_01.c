#include <stdio.h>
//standard input output
//#include 는 C언어가 아니다 , 헤더파일

//C 언어는 함수가 기본
//실행하려는 내용은 항상 반드시 main()함수안에 있어야한다

int main(void){ //함수 (반환 형식 , 함수이름 , 매개변수)
    
    int num = 10; //정수 타입
    int num2 = 20;
    printf("num = %d , %d\n", num, num2);
    //서식문자 : % + 소문자 알파벳
    printf("all you \t need is \nlove\n");
    printf("\\n \n");
    //escape sequence : \ + 소문자 알파벳
    printf("Hello World\n");
    
    return 0;
}
