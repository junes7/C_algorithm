// 하나라도 참이면 참 출력하기
// print true if anyone is true
// 두 개의 참(1) 또는 거짓(0)이 입력될 때, 하나라도 참이면 참을 출력하는
// 프로그램을 작성해보자.
// 1 또는 0의 값만 가지는 2개의 정수가 공백을 두고 입력된다.
// 하나라도 참일 경우 1을 출력하고, 그 외의 경우에는 0을 출력한다.
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a || b);
    return 0;
}