// 2, 4, 6을 5, 16, 1로 만들기 by using Assignment Operator(복합 대입 연산자)
#include<stdio.h>
int main(void){
    int num1=2, num2=4, num3=6;
    num1+=3;
    num2*=4;
    num3%=5;
    printf("Result: %d, %d, %d\n", num1, num2, num3);
    return 0;
}
