#include<stdio.h>
#include<stdlib.h>
int main(void){
    char max=0,str[50];
    int i,n=0;
    printf("���ڿ� �Է�: ");
    scanf("%s",str);
    while(str[n]!='\0')
        n++;
    for(i=0;i<n;i++)
        if(max<str[i]){
            max=str[i];
        }
    printf("�ƽ�Ű �ڵ� ���� ���� ū ����: %c\n",max);
}