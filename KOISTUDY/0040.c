// 문자 한 개 입력받아 다음 문자 출력하기
// print next of one input character
// 영문자 한 개를 입력받아 그 다음 문자를 출력해보자. 영문자 "A"의 다음
// 문자는 "B"이고, 영문자 "0"의 다음 문자는 "1"이다.
// 숫자는 수를 표현하는 문자로서 "0" 은 문자 그 자체를 의미하고, 0은 값을
// 의미한다.
// 힌트:아스키문자표에서 "A"는 10진수 65로 저장되고 "B"는 10진수 66으로
// 저장된다. 따라서 문자도 값으로 덧셈을 할 수 있다.
# include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    printf("%c",c+1);
    return 0;
}