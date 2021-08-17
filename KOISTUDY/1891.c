// 재귀로 각 자리 수의 합 리턴하기
// return sum of each digit with recursion
// 한 정수 n을 입력받아 각 자리 수의 합을 출력하시오.(단, 반복문은
// 사용할 수 없다.)
# include <stdio.h>
long long int n;
int s=0;
int f(long long int);
int f(long long int n){
    if(n<=0) 
        return s;
    s+=n%10;
    f(n/10);
}
int main() {
    scanf("%lld",&n);
    printf("%d",f(n));
    return 0;
}