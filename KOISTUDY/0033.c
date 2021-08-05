// 8진 정수 한 개 입력받아 10진수로 출력하기
// print octal number as decimal number
// 8진수로 입력된 정수 1개를 10진수로 바꾸어 출력해보자.
// %o로 입력받으면 8진수로 인식시켜 저장시킬 수 있다. %d로 출력하면
// 10진수로 출력된다.
// int n;
// scanf("%o", &n);
// printf("%d", n);
// (C언어에서 소스 코드 작성 시 0으로 시작하는 수는 8진수로 인식된다.
// int a = 013; // 10진수 11과 같은 값)

# include <stdio.h>
int main() {
    int n;
    scanf("%o",&n);
    printf("%d",n);
    return 0;
}