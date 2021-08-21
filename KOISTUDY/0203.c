// 최대공약수(greatest common divisor)
// 세 정수 A, B, C를 입력받아서 최대공약수를 구하는 프로그램을 작성.
# include <stdio.h>
int gcd(int a,int b){
    if(b==0) return a;
    else
        return gcd(b,a%b);
}
int main(){
    int a,b,c,t,g;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    g=gcd(a,b);
    if(g<c){
        printf("%d",gcd(c,g));
    }else{
        printf("%d",gcd(g,c));
    }
    return 0;
}