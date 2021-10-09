#include<stdio.h>
int SquareByValue(int n){
    return n*n;
}
void SquareByReference(int *ptr){
    int num=*ptr;
    *ptr=num*num;
}
int main(void){
    int num=10;
    printf("%d\n",SquareByValue(num));
    SquareByReference(&num);
    printf("%d\n",num);
}