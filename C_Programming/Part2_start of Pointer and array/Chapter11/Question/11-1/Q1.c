#include<stdio.h>
int main(void){
    int i,s=0,max=0,min=100000,arr[5];
    for(i=0;i<5;i++){
        printf("�Է�: ");
        scanf("%d",&arr[i]);
        s+=arr[i];
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
    }
    printf("�ִ�: %d\n�ּڰ�: %d\n�� ��: %d\n",max,min,s);
}