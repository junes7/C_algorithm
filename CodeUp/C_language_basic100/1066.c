// 정수 3개 입력받아 짝/홀 출력하기
// print even/odd number of three input integers
// 세 정수 a, b, c가 입력되었을 때, 짝(even)/홀(odd)을 출력해보자.
// 세 정수 a, b, c 가 공백을 두고 입력된다.
// 0 <= a, b, c <= +2147483647
// 입력된 순서대로 짝(even)/홀(odd)을 줄을 바꿔 출력한다.
// method 1
# include <stdio.h>

int main() {
    int d[3];
    for (int i=0; i<3; i++) {
        scanf("%d", &d[i]);
    }
    for (int i=0; i<3; i++) {
        if (d[i] % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}