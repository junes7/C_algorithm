// 짝수 합 구하기
// Get sum of even number
// 정수(1 ~ 100) 1개를 입력받아 1부터 그 수까지 짝수의 합을 구해보자.
// 정수 1개가 입력된다. (0 ~ 100)
// 1부터 입력된 수까지 짝수의 합을 출력한다.
// method 1
# include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        if (i % 2 ==0) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}