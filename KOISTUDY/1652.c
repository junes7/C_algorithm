// 피보나치 수열
// fibonacci sequence
// 피보나치 수열이란 앞의 두 수를 더하여 나오는 수열이다.
// 첫 번째 수와 두 번째 수는 모두 1이고, 세 번째 수부터는 이전의 두 수를
// 더하여 나타낸다. 피보나치 수열을 나열해 보면 다음과 같다.
// 1,1,2,3,5,8,13…
// 자연수 N을 입력받아 N번째 피보나치 수를 출력하는 프로그램을 작성하시오.
// 단, N이 커질 수 있으므로 출력값에 10,009를 나눈 나머지를 출력한다.
# include <stdio.h>
long long int d[210]={};
long long int fibo(int n){
    if(n<=2){
        d[n]=1;
        return d[n];
    }
    else if(d[n]!=0){
        return d[n];
    }
    else{
        d[n]=(fibo(n-1)+fibo(n-2))%10009;
        return d[n];
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%lld",fibo(n));
    return 0;
}