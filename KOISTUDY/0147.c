// GCD(Greatest Common Divisor)
// 두 정수 a, b를 입력받아서, a, b의 최대공약수를 출력하시오.
# include <stdio.h>
int gcd(int a,int b){
    if(b==0) return a;
    else
        return gcd(b,a%b);
}
int main() {
    int a,b,t;
    scanf("%d %d",&a,&b);
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    printf("%d",gcd(a,b));
    return 0;
}