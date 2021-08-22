// 두 수의 대소 비교하기
// comparison of two numbers
// 두 정수 a, b를 입력받아서 두 수 중 큰 수를 출력하시오.
# include <stdio.h>
int main() {
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    if(a<b)
        printf("%lld",b);
    else
        printf("%lld",a);
    return 0;
}