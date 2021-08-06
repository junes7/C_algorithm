// 정수 한 개 입력받아 1 더해 출력하기
// print one input integer after add one
// 정수를 한 개 입력받아 1만큼 더해 출력해보자. 단, -2147483648 ~
// +2147483647 의 범위로 입력된다.
// 계산되고 난 후의 값의 범위(데이터형)에 주의한다.
// 어떤 변수(a)에 값을 저장한 후 a+1 의 값을 출력할 수도 있고, ++a
// 연산을 한 후에 출력할 수도 있다.
// ++a, --a, a++, a-- 와 같이 어떤 변수의 앞이나 뒤에 붙여 변수에
// 저장되어있는 값을 1만큼 더하거나 빼주는 연산자를 증감연산자라고 한다.
// 증감연산자를 변수 앞에 붙이면 그 변수를 사용하기 전에 증감을 먼저
// 수행하고, 증감연산자를 변수 뒤에 붙이면 일단 변수에 저장되어있는 값을
// 먼저 사용하고 난 후 나중에 증감을 수행한다.
# include <stdio.h>
int main() {
    long long int n;
    scanf("%lld",&n);
    printf("%lld",++n);
    return 0;
}