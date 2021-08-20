// 피보나치 수열(Advance)
// fibonacci sequence
// 피보나치 수는 다음과 같이 정의된다.
// f1 = 1, f2 = 1
// fn = fn-1 + fn-2 ( n > 2 )
// 한 정수를 입력받아서 fn을 구하는 프로그램을 작성하시오.
// 단 재귀함수로 작성하시오.
# include <stdio.h>
long long int d[100]={};
long long int fibo(int n){
    if(n<=2){
        d[n]=1;
        return d[n];
    }
    else if(d[n]!=0){
        return d[n];
    }
    else{
        d[n]=fibo(n-1)+fibo(n-2);
        return d[n];
    }
}
int main() {
    int n;  
    scanf("%d",&n);
    printf("%lld",fibo(n));
    return 0;
}