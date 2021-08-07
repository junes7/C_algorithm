// 한 번에 2^n 배로 출력하기
// print power of two at once
// 정수 두 개(a, b)를 입력받아 a를 2^b배 곱한 값으로 출력해보자.
// 0 <= a <= 10, 0 <= b <= 10
// 예를 들어 1 3 이 입력되면 1을 2^3(8)배 하여 출력한다.
// int a=1, b=10;
// printf("%d", a << b); //2^10 = 1024 가 출력된다.
# include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a<<b);
    return 0;
}