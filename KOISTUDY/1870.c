// 함수로 정수 내림 한 값 리턴하기
// return integer round down through function
// 실수(real number)를 입력 받아 정수로 내림해 출력하시오. 단, 함수형
// 문제이므로 함수 f()만 작성해 제출하시오.
# include <stdio.h>
double x;
long long int f(double);
long long int f(double x){
    long long int t=(long long int)x;
    if(t>x)
        return x-1;
    else
        return x;
}
int main() {
    scanf("%lf",&x);
    printf("%lld\n",f(x));
    return 0;
}
