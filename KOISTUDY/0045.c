// 정수 세 개 입력받아 합과 평균 출력하기
// print sum and average of three integers
// 정수 세 개를 입력받아 합과 평균을 출력해보자. 단, -2147483648 ~
// +2147483647
# include <stdio.h>
int main() {
    long long int a,b,c,s;
    scanf("%lld %lld %lld",&a,&b,&c);
    s=(a+b+c);
    printf("%lld\n%.1llf",s,s/(3.0));
    return 0;
}