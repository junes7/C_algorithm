// 별 그리기 1(draw star)
// 한 정수 N 입력받아 2*N-1개의 별을 일렬로 그리시오.(1 <= N <= 100)
# include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        printf("*");
    }
    return 0;
}