// 참/거짓이 서로 같을 때에만 참 출력하기
// print only if true/false are same each other
// 두 개의 참(1) 또는 거짓(0)이 입력될 때,
// 참/거짓이 서로 같을 때에만 참이 계산되는 프로그램을 작성해보자.
// 1 또는 0의 값만 가지는 2개의 정수가 공백을 두고 입력된다.
// 참/거짓이 서로 같을 때에만 1을 출력하고, 그 외의 경우에는 0을 출력한다.
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (!a && !b)||(a && b));
    return 0;
}