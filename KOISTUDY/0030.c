// 10진 정수 한 개 입력받아 8진수로 출력하기
// print decimal number as octal number
// 10진수를 입력받아 8진수(octal)로 출력해보자.
// %d(10진수 형태)로 입력받고, %o를 사용해 출력하면 8진수(octal)로 출력.
# include <stdio.h>
int main() {
    int d;
    scanf("%d",&d);
    printf("%o",d);
    return 0;
}