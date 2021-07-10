// 정수 입력받아 계속 출력하기
// print number of input integers continuously
// n개의 정수가 순서대로 입력된다.
// -2147483648 ~ +2147483647, 단 n의 최대 개수는 알 수 없다.
// n개의 입력된 정수를 순서대로 출력해보자.
// while( ), for( ), do~while( ) 등의 반복문을 사용할 수 없다.
// 첫 줄에 개수 n이 입력되고, 두 번째 줄에 n개의 정수가 공백을 두고 입력된다.
// -2147483648 ~ +2147483647, 단 n의 최대 개수는 알 수 없다.
// n개의 정수를 한 개씩 줄을 바꿔 출력한다.
// method 1
# include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    reget:
        scanf("%d", &m);
        printf("%d\n", m);
        n -= 1;
    if(n!=0) goto reget;
    return 0;
}