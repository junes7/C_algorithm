// 정수 두 개 입력받아 자동 계산하기
// calculate of two integers automatically
// 정수 두 개(a, b)를 입력받아 합, 차, 곱, 몫, 나머지, 나눈 값을
// 자동으로 계산해보자. 단 0 <= a, b <= 2147483647, b는 0이 아니다.
# include <stdio.h>
int main() {
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2llf",a+b,a-b,a*b,a/b,a%b,(double)a/b);
    return 0;
}