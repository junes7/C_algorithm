// get the result of calcuation
#include<stdio.h>
int main(void){
    int num1, num2, num3, result;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result=(num1-num2)*(num2+num3)*(num3%num1);
    printf("������: %d\n", result);
    return 0;
}