// 정수 1개 입력받아 카운트다운 출력하기 2
// print countdown of one input integer
// 정수(1 ~ 100) 1개가 입력되었을 때 카운트다운을 출력해보자.
// 정수 1개가 입력된다. (1 ~ 100)
// 1씩 줄이면서 한 줄에 하나씩 0이 될 때까지 출력한다.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n!=0) {
        n -= 1;
        printf("%d\n", n);
    }
    return 0;
}