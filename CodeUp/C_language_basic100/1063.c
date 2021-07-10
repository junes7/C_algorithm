// 두 정수 입력받아 큰 수 출력하기
// print large number after compare two input integers
// 입력된 두 정수 a, b 중 큰 값을 출력하는 프로그램을 작성해보자.
// 단, 조건문을 사용하지 않고 3항 연산자 ? 를 사용한다.
// 3개의 요소로 이루어지는 3항(ternary) 연산자는
// "조건식 ? (참일 때의 값) : (거짓일 때의 값)” 의 형태로 사용하는 연산자.
// - 조건식의 계산 결과가 참인 경우에는 ':' 왼쪽의 값 또는 식으로 바뀌고,
// - 거짓인 경우에는 ':' 오른쪽의 값 또는 식으로 바뀐다.
// printf("%d", a>b ? a:b); //두 값 중 큰 값이 출력된다.
// 두 정수가 공백을 두고 입력된다. -2147483648 ~ +2147483647
// 두 정수 중 큰 값을 10진수로 출력한다.
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a > b ? a:b);
    return 0;
}