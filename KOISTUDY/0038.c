// 정수 두 개 입력받아 합 출력하기 2
// print sum of two integers
// 정수 2개를 입력받아 합을 출력하는 프로그램을 작성해보자.
// 단, 입력되는 정수는 -2147483648 ~ +2147483648 이다.
// + 연산자를 사용하면 된다. 단, 계산된 결과가 int 형으로 저장할 수 있는
// 범위를 넘어갈 수 있기 때문에 다른 데이터형을 사용해야 한다.
# include <stdio.h>
int main() {
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a+b);
    return 0;
}