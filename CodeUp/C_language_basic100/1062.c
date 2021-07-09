// 비트단위로 XOR 하여 출력하기
// print the result of bitwise XOR
// 입력된 정수 두 개를 비트단위로 xor 연산한 후 그 결과를 정수로 출력해보자.
// 비트단위(bitwise) 연산자 ^(xor, circumflex/caret, 서컴플렉스/카릿)를
// 사용하면 된다.
// 2개의 정수가 공백을 두고 입력된다. -2147483648 ~ +2147483647
// 두 정수를 비트단위(bitwise)로 xor 계산을 수행한 결과를 10진수로 출력한다.
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a ^b);
    return 0;
}