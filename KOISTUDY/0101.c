// 두 정수의 몫과 나머지 구하기
// get quotient and remainder of two integers
// 두 정수 a, b를 입력받아서 정수 a를 b로 나눈 몫과 나머지를 구하시오.
# include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n",a/b);
    printf("%d",a%b);
}