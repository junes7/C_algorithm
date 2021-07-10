// 정수 3개 입력받아 짝수만 출력하기
// print even number of three input integers
// 세 정수 a, b, c 가 공백을 두고 입력된다.
// 0 ~ +2147483647 범위의 정수들이 입력되며 적어도 1개는 짝수이다.
// 짝수만 순서대로 줄을 바꿔 출력한다.
// method 1
// # include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a % 2 == 0) {
//         printf("%d\n", a);
//     }
//     if (b % 2 == 0) {
//         printf("%d\n", b);
//     }
//     if (c % 2 == 0) {
//         printf("%d", c);
//     }
//     return 0;
// }
// method 2
# include <stdio.h>

int main() {
    int d[3];
    scanf("%d %d %d", &d[0], &d[1], &d[2]);
    for (int i=0; i<3; i++) {
        if (d[i] % 2 == 0) {
            printf("%d\n", d[i]);
        }
    }
    return 0;
}