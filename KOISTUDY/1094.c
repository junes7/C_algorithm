// 별 그리기 10(draw star)
// 한 정수 n을 입력 받아서 다음과 같은 패턴의 모양을 그려보자.
# include <stdio.h>
int main() {
    int n,i,j,s[22]={};
    scanf("%d",&n);
    if(n<=2){
        for(i=0;i<n;i++){
            printf("*\n");
        }
    }
    else{
        s[0]=1;
        s[1]=1;
        for(i=2;i<n;i++){
            s[i]=s[i-1]+s[i-2];
        }
        for(i=0;i<n;i++){
            for(j=0;j<s[i];j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}