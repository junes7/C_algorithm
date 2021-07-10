// 정수 1개 입력받아 분석하기
// analyze one input integer
// 정수 1개가 입력되었을 때, 음(minus)/양(plus)과 짝(even)/홀(odd)을 출력.
// 조건/선택 실행 구조의 안에 조건/선택 실행 구조를 다시 "중첩"할 수 있다.
// 정수 1개가 입력된다. -2147483648 ~ +2147483647, 단 0은 입력되지 않는다.
// 입력된 정수에 대해 첫 줄에 minus나 plus를 출력,
// 두 번째 줄에 odd 나 even 을 출력한다.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("minus\n");
        if (n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    } else {
        printf("plus\n");
        if (n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}