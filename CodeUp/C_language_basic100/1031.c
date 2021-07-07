// 10진 정수 1개 입력받아 8진수로 출력하기
// print decimal as octal number
// 10진수를 입력받아 8진수(octal)로 출력해보자. %d(10진수 형태)로
// 입력받고, %o를 사용해 출력하면 8진수(octal)로 출력된다.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%o", n);
    return 0;
}