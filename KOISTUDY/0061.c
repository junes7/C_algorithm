// 비트단위로 xor 하여 출력하기
// print the result of bitwise xor
// 입력된 정수 두 개를 비트단위로 xor 연산한 후 그 결과를 정수로 출력.
// 비트단위(bitwise) 연산자 ^(xor, circumflex/caret, 서컴플렉스/카릿)를
// 사용하면 된다.
# include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a^b);
    return 0;
}