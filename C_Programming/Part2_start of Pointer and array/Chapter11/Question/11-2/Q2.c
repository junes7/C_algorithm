#include<stdio.h>
int main(void){
    char t,str[50];
    int i,n=0;
    printf("���ڿ� �Է�: ");
    scanf("%s",str);
    while(str[n]!='\0')
        n++;
    for(i=0;i<n/2;i++){
        t=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=t;
    }
    printf("������ ���ڿ� ���: %s\n",str);
}