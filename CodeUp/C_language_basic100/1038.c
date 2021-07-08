// 정수 2개 입력받아 합 출력하기 1
// print sum after input two integers
// 정수 2개를 입력받아 합을 출력하는 프로그램을 작성해보자.(단,
// 입력되는 정수는 -1073741824 ~ 1073741824 이다.)
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0) {
        printf("%u", a+b);
    } else {
        printf("%d", a+b);
    }
    return 0;
}