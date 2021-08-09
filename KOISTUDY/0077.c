// 짝수 합 구하기
// Get sum of even number
// 정수(1 ~ 100) 한 개를 입력받아 1 부터 그 수까지 짝수의 합을 구해보자.
# include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0)
            sum+=i;
    }
    printf("%d",sum);
    return 0;
}