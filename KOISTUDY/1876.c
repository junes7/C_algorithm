// 함수로 두 정수의 차이 값 리턴하기
// return the difference between two integers through function
// long long int 형 정수 두 개를 입력 받아 두 수의 차이값을 출력.
// 단, 함수형 문제이므로 함수 f()만 작성하여 제출하시오.
# include <stdio.h>
long long int n,m;
long long int f(long long int,long long int);
long long int f(long long int p,long long int q){
    if(p<q)
        return q-p;
    else
        return p-q;
}
int main() {
    scanf("%lld %lld",&n,&m);
    printf("%lld\n",f(n,m));
    return 0;
}