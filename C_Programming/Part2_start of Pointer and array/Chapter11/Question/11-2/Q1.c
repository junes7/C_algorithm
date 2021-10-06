#include<stdio.h>
int main(void){
    char str[50];
    int i=0;
    printf("문자열 입력: ");
    scanf("%s",str);
    while(str[i]!='\0')
        i++;
    printf("문자열 길이: %d\n",i);
}