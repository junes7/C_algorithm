#include<stdio.h>
int main(void){
    int i,s=0,arr[5]={1, 2, 3, 4, 5};
    int *ptr=&arr[4];
    for(i=0;i<5;i++)
        s+=*(ptr--);
    printf("배열 정수 합: %d\n",s);
}