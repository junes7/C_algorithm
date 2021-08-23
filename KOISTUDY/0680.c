// 합과 차(add and subtract)
// 어떤 두 자연수 a와 b가 있을 때(a≥b), 합 n=a+b와 차 m=a-b는 다음과
// 같은 성질을 가진다. n+m은 짝수이다. 두 자연수 a와 b의 합과 차가
// 입력되었을 때, a와 b를 구하는 프로그램을 작성하시오.
# include <stdio.h>
int main() {
    int i,j,n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++){
        j=n-i;
        if(j+i==n&&j-i==m){
            printf("%d\n%d",j,i);
            break;
        }
    }
    return 0;
}