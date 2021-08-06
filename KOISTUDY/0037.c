// 정수 두 개 입력받아 합 출력하기 1
// print sum of two integers
// 정수 2개를 입력받아 합을 출력하는 프로그램을 작성해보자.
// (단, 입력되는 정수는 -1073741824 ~ 1073741824 이다.)
# include <stdio.h>
int main() {
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a+b);
}