#include<stdio.h>
int main(void){
    int i,arr[6]={1, 2, 3, 4, 5, 6};
    int *temp,*ptr1=arr,*ptr2=&arr[5];
    for(i=0;i<6;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(i=0;i<3;i++){
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2--;
    }
    for(i=0;i<6;i++)
        printf("%d ",arr[i]);

}