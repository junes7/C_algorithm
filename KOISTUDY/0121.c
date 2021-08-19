// 별 그리기 3 (draw star)
// 한 정수 N일 입력받아서 N층의 이등변 삼각형 모양의 별을 출력하시오.
// (1 <= N <= 100 )
# include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        if(i<=n){
            for(j=0;j<i;j++)
                printf("*");
        }else{
            for(j=0;j<(2*n-i);j++)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}