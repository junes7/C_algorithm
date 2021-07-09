// 두 정수 입력받아 비교하기 2
// comparison two input integers
// 두 정수(a, b)를 입력받아 a와 b가 같으면 1을, 같지 않으면 0을
// 출력하는 프로그램을 작성해보자.
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a == b);
}