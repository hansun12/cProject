#include <stdio.h>

int main(void)
{
    int num1= +2;
    int num2= -4;

    num1= -num1;
    printf("num1: %d \n", num1);
    num2= -num2;
    printf("num2: %d \n", num2);
    return 0;
}//부호 연산자를 변경 가능 어렵다...........
