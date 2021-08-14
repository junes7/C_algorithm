// 함수로 절댓값 리턴하기
// return absolute value through function
// 정수를 입력 받아 절댓값을 출력하시오. 단, 함수형 문제이므로
// 함수 abs()만 작성하여 제출하시오.
# include <stdio.h>
long long int n;
long long int abs(long long int);
long long int abs(long long int n){
    if(n<0)
        return n*-1;
    else
        return n;
}
int main() {
    scanf("%lld",&n);
    printf("%lld\n",abs(n));
    return 0;
}