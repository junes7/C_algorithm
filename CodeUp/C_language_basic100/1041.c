// 문자 1개 입력받아 다음 문자 출력하기
// printf next character after input one character
// 영문자 1개를 입력받아 그 다음 문자를 출력해보자.
// 영문자 'A'의 다음 문자는 'B'이고, 영문자 '0'의 다음 문자는 '1'이다.
// 숫자는 수를 표현하는 문자로서 '0' 은 문자 그 자체를 의미하고,
// 0은 값을 의미한다.
// method 1
# include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    printf("%c", c+1);
    return 0;
}