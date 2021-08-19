// 별 그리기 2.5 (draw star)
// 한 정수 N일 입력받아서 N층의 역삼각형 모양의 별을 출력하시오.
// ( 단 1 <= N <= 100 )
# include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}