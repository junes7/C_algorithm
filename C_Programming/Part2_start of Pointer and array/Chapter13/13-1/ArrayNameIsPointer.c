#include<stdio.h>
int main(void){
    int arr[3]={15, 25, 35};
    int *ptr=arr; //int *ptr=&arr[0]과 같은 문장
    printf("%d %d\n",ptr[0], arr[0]);
    printf("%d %d\n",ptr[1], arr[1]);
    printf("%d %d\n",ptr[2], arr[2]);
    printf("%d %d\n",*ptr ,*arr);
}