// 정수(int) 2개 입력받아 그대로 출력하기
// 2개의 정수가 엔터/공백으로 입력 데이터가 구분되어 입력
// 입력된 두 정수를 공백으로 구분하여 출력
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a, b);
}