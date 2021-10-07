#include<stdio.h>
int main(void){
    int arr[3]={11, 22, 33};
    int *ptr=arr;
    printf("%d %d %d\n",*(ptr),*(ptr+1),*(ptr+2));
    // method 1
    // printf("%d ",*ptr);ptr++;
    // printf("%d ",*ptr);ptr++;
    // printf("%d ",*ptr);ptr--;
    // printf("%d ",*ptr);ptr--;
    // printf("%d ",*ptr);printf("\n");
    // method 2
    printf("%d ",*ptr++);
    printf("%d ",*ptr++);
    printf("%d ",*ptr--);
    printf("%d ",*ptr--);
    printf("%d \n",*ptr);
}