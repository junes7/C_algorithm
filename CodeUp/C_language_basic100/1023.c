// 실수 1개 입력받아 부분별로 출력하기
// print one float number partially
// 실수 1개를 입력받아 정수 부분과 실수 부분으로 나누어 출력한다.
// 만약 실수 부분이 0으로 시작하지 않는다면(예를 들어 1.000009)
// scanf("%d.%d", &a, &b)도 하나의 방법이 될 수 있다.
// 실수 1개가 입력된다.(단, 입력값은 절댓값이 10000을 넘지 않으며, 소수점
// 이하 자릿수는 6자리까지이고 0이 아닌 숫자로 시작한다.)
// 첫 번쩨 줄에 정수 부분을, 두 번째 줄에 실수 부분을 출력한다.
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d.%d", &a, &b);
    printf("%d\n%d", a, b);
    return 0;
}
// method 2
// # include <stdio.h>

// int main() {
//     double x, b;
//     int a, c;
//     scanf("%lf", &x);
//     a = (int)x;
//     if (x < 0) {
//         x = -x;
//     }
//     printf("%d\n", a);
//     // 실수의 소수점을 추출해서 정수형 변수에 대입
//     b = x * 1000000;
//     c = (int)b % 1000000;
//     while (c % 10 == 0) {
//         c /= 10;
//     }
//     printf("%d\n", c);
//     return 0;
// }