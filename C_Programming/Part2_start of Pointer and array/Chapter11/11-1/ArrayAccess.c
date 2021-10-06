#include<stdio.h>
int main(void){
    int i,t=10,sum=0,arr[5];
    for(i=0;i<5;i++){
        arr[i]=t;
        t+=10;
    }
    for(i=0;i<5;i++)
        sum+=arr[i];
    printf("배열요소에 저장된 값의 합: %d\n",sum);
}