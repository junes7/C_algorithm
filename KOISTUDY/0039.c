// 정수 한 개 입력받아 부호 바꿔 출력하기
// print one input integer with changing sign
// 입력된 정수의 부호를 바꿔 출력해보자. 단, -2147483647 ~ +2147483647
// 범위의 정수가 입력된다. 단항 연산자인 -(negative)를 변수 앞에 붙이면
// 부호가 반대로 바뀌어 계산된다.
// int a;
// scanf("%d", &a);
// printf("%d", -a);

# include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("%d",-a);
    return 0;
}