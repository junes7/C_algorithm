#include<stdio.h>
#include<stdlib.h>
int main(void){
    char max=0,str[50];
    int i,n=0;
    printf("문자열 입력: ");
    scanf("%s",str);
    while(str[n]!='\0')
        n++;
    for(i=0;i<n;i++)
        if(max<str[i]){
            max=str[i];
        }
    printf("아스키 코드 값이 가장 큰 문자: %c\n",max);
}