// 홀수, 짝수 판별하기
// distinguish odd or even
// 한 정수를 입력받아 그 값이 홀수인지 짝수인지 판별하시오.
# include <stdio.h>
int main() {
    long long int n;
    scanf("%lld",&n);
    if(n%2==0)
        printf("even");
    else
        printf("odd");
    return 0;
}