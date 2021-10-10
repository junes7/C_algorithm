// convert decimal to binary number
#include<stdio.h>
int main(void){
    int num,t=1,s=0;
    printf("10진수 정수 입력: ");
    scanf("%d",&num);
    while(num!=0){
        s+=num%2*t;
        num/=2;
        t*=10;
    }
    printf("%d\n",s);
}