// 정수 두 개 입력받아 나눈 나머지 출력하기
// print divided remainder of two integers
// 정수 두 개(a, b) 를 입력받아 a를 b로 나눈 나머지를 출력해보자.
// 단, 0 <= a, b <= +2147483647, b는 0이 아니다.
// C언어에서 정수%정수 연산의 결과는 나눈 나머지로 계산된다.
// % 연산자(modulus, mod 연산) 수학자 가우스가 생각해낸 연산으로,
// 어떤 정수를 다른 정수로 나누고 난 후 남는 나머지를 계산하는 연산이다.
// 단, 음(-)이 아닌 정수에 대해서만 연산된다.
# include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a%b);
    return 0;
}