#include<stdio.h>
void SwapIntPtr(int **dptr1,int **dptr2){
    int *temp=*dptr1;
    *dptr1=*dptr2;
    *dptr2=temp;
}
int main(void){
    int num1=10,num2=20,*ptr1,*ptr2;
    ptr1=&num1,ptr2=&num2;
    printf("*ptr1, *ptr2: %d %d\n",*ptr1,*ptr2);
    SwapIntPtr(&ptr1,&ptr2);
    printf("*ptr1, *ptr2: %d %d\n",*ptr1,*ptr2);
}