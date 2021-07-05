// 문자 2개 입력받아 순서 바꿔 출력하기
// print in reverse order after input two characters
// 2개의 문자(ASCII CODE)를 입력받아서 순서를 바꿔 출력해보자.
// 2개의 문자가 공백으로 구분되어 입력 | 두 문자의 순서를 바꿔 출력
# include <stdio.h>

int main() {
    char x, y;
    scanf("%c %c", &x, &y);
    printf("%c %c", y, x);
    return 0;
}