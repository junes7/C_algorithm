// 정수 입력받아 아스키 문자로 출력하기
// print integer number as ASCII character
// 10진 정수 1개를 입력받아 아스키 문자로 출력해보자. 0~255범위의
// 정수만 입력된다.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%c", n);
    return 0;
}