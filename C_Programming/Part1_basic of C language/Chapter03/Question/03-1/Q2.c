#include<stdio.h>
int main(void){
    int num1, num2, num3, result;
    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result=num1*num2+num3;
    printf("%dx%d+%d=%d", num1, num2, num3, result);
    return 0;
}