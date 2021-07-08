// 정수 3개 입력받아 합과 평균 출력하기
// print sum and average of three input integers
// 정수 3개를 입력받아 합과 평균을 출력해보자.
// 단, -2147483648 ~ +2147483647
// 합과 평균을 줄을 바꿔 출력한다. 평균은 소수점 이하 둘째 자리에서
// 반올림해서 소수점 이하 첫째 자리까지 출력한다.
// method 1
# include <stdio.h>

int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", a+b+c);
    printf("%.1lf", (a+b+c)/3.0);
    return 0;
}