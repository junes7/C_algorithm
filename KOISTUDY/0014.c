// 문자 두 개 입력받아 순서 바꿔 출력하기
// print two input characters with reverse order
// 두 개의 문자(ASCII CODE)를 입력받아서 순서를 바꿔 출력해보자.
# include <stdio.h>
int main() {
    char a,b;
    scanf("%c %c",&a,&b);
    printf("%c %c",b,a);
}