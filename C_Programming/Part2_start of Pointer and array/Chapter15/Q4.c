// Is Palindrome
#include<stdio.h>
#include<string.h>
int main(void){
    int i,n=0,d=0;
    char st[50];
    printf("���ڿ� �Է�: ");
    scanf("%s",&st);
    while(st[n]!='\0')
        n++;
    for(i=0;i<n/2;i++){
        if(st[i]!=st[n-1-i])
            d++;
        else
            continue;
    }
    printf(d==0?"ȸ�� �Դϴ�.":"ȸ���� �ƴմϴ�.");
}