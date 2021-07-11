// 정수 1개 입력받아 그 수까지 출력하기
// input one integer and print until the number
// 정수(0 ~ 100) 1개를 입력받아 0부터 그 수까지 순서대로 출력해보자.
// 일반적으로 반복 횟수를 카운트하면서 비교하기 위해 i 변수를 많이 사용한다.
// i : index, iterator ?
// 정수 1개가 입력.(0 ~ 100) | 0부터 그 수까지 줄을 바꿔 한 개씩 출력한다.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++) {
        printf("%d\n", i);
    }
    return 0;
}