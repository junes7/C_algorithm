#include<stdio.h>
int main(void){
    char str[50];
    int i=0;
    printf("���ڿ� �Է�: ");
    scanf("%s",str);
    while(str[i]!='\0')
        i++;
    printf("���ڿ� ����: %d\n",i);
}