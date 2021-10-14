#include<stdio.h>
void SimpleFunc(void){
    printf("I'm so simple!");
}
int main(void){
    int num=20;
    void *ptr;
    ptr=&num;
    printf("%p\n",ptr);
    ptr=SimpleFunc;
    printf("%p\n",ptr);
}