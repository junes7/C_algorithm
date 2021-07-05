// 정수 1개 입력받아 3번 출력하기
// print three times after input one integer
// int형 정수 1개를 입력받아 공백을 사이에 두고 3번 출력해보자.
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d %d %d", n, n, n);
    return 0;
}