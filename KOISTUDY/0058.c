// 비트단위로 바꿔 출력하기
// print input integer after do bitwise not
// 입력 된 정수를 비트단위로 참/거짓을 바꾼 후 정수로 출력해보자.
// 비트단위(bitwise)연산자 ~를 붙이면 된다.(~ : tilde, 틸드라고 읽는다.)
# include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("%d",~a);
    return 0;
}