#include<stdio.h>
int main(void){
    int i,n[10],j=0,k=0,odd[5],even[5];
    printf("총 10개의 숫자 입력\n");
    for(i=0;i<10;i++){
        printf("입력: ");
        scanf("%d",&n[i]);
        if(n[i]%2==1)
            odd[j++]=n[i];
        else
            even[k++]=n[i];
    }
    printf("홀수 출력: ");
    for(i=0;i<5;i++){
        if(i<4){
            printf("%d, ",odd[i]);
        }else{
            printf("%d\n",odd[i]);
        }
    }
    printf("짝수 출력: ");
    for(i=0;i<5;i++){
        if(i<4){
            printf("%d, ",even[i]);
        }else{
            printf("%d\n",even[i]);
        }
    }
}