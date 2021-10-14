#include<stdio.h>
int main(void){
    int *arr1[5]={10,20,30,40,50};
    int *arr2[3][5];
    int **ar1=arr1;
    int *(*ar2)[5]=arr2;
    printf("%d ",*(ar1+1));
}