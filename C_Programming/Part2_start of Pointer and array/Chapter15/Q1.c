#include<stdio.h>
int main(void){
    int i,n[10],j=0,k=0,odd[5],even[5];
    printf("�� 10���� ���� �Է�\n");
    for(i=0;i<10;i++){
        printf("�Է�: ");
        scanf("%d",&n[i]);
        if(n[i]%2==1)
            odd[j++]=n[i];
        else
            even[k++]=n[i];
    }
    printf("Ȧ�� ���: ");
    for(i=0;i<5;i++){
        if(i<4){
            printf("%d, ",odd[i]);
        }else{
            printf("%d\n",odd[i]);
        }
    }
    printf("¦�� ���: ");
    for(i=0;i<5;i++){
        if(i<4){
            printf("%d, ",even[i]);
        }else{
            printf("%d\n",even[i]);
        }
    }
}