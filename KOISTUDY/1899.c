// n번째 피보나치 수 출력하기(재귀)(메모이제이션)
// print nth fibonacci number
// n번째 피보나치 수를 1000000007(10억7)로 나눈 나머지를 출력하시오.
// (단, 반복문은 사용할 수 없다.)
# include <stdio.h>
int n;
int chk[110];
long long int d[110];
long long int fibo(int n){
    if(chk[n]==1)
        return d[n];
    chk[n]=1;
    if(n<=2)
        return d[n]=1;
    else
        return d[n]=(fibo(n-1)+fibo(n-2))%1000000007;
}
int main() {
    scanf("%d",&n);
    printf("%lld\n",fibo(n));
}