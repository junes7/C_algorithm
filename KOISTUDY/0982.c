// n번째 피보나치 수(Hell)
// nth fibonacci number(Hell)
// 피보나치 수에 대한 문제는 많이 풀어보았을 것이다. f0 = 1, f1 = 1로
// 시작하는 피보나치 수의 n번째 항을 구하는 프로그램을 작성하시오.
// 단, n이 너무 커지기 때문에 피보나치 수를 100,000,007로 나눈 나머지를
// 출력하시오.
# include <stdio.h>
void mul(long long int f[2][2],long long int m[2][2]);
void power(long long int f[2][2],long long int n);
long long int fibo(long long int n){
    long long int f[2][2]={{1,1},{1,0}};
    if(n<=1)
        return 1;
    power(f,n-1);
    return f[0][0];
}
void power(long long int f[2][2],long long int n){
    if(n<=1)
        return;
    if(n>1){
        power(f,n/2);
        mul(f,f);
        if(n&1){
            long long int m[2][2]={{1,1},{1,0}};
            mul(f,m);
        }
    }
}
void mul(long long int f[2][2],long long int m[2][2]){
    long long int w=f[0][0]*m[0][0]+f[0][1]*m[1][0];
    long long int x=f[0][0]*m[0][1]+f[0][1]*m[1][1];
    long long int y=f[1][0]*m[0][0]+f[1][1]*m[1][0];
    long long int z=f[1][0]*m[0][1]+f[1][1]*m[1][1];
    f[0][0]=w%100000007;
    f[0][1]=x%100000007;
    f[1][0]=y%100000007;
    f[1][1]=z%100000007;
}
int main() {
    long long int n;
    scanf("%lld",&n);
    printf("%lld",fibo(n+1));
    return 0;
}