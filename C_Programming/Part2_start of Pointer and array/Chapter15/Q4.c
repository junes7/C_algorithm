// Is Palindrome
#include<stdio.h>
#include<string.h>
int main(void){
    int i,n=0,d=0;
    char st[50];
    printf("문자열 입력: ");
    scanf("%s",&st);
    while(st[n]!='\0')
        n++;
    for(i=0;i<n/2;i++){
        if(st[i]!=st[n-1-i])
            d++;
        else
            continue;
    }
    printf(d==0?"회문 입니다.":"회문이 아닙니다.");
}