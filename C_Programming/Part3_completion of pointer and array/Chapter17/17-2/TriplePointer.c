#include<stdio.h>
int main(void){
    int num=100,*ptr=&num,**dptr=&ptr,***tptr=&dptr;
    printf("%d %d %d\n",*ptr,**dptr,***tptr);
    ***tptr=150;
    printf("%d %d %d\n",*ptr,**dptr,***tptr);
}