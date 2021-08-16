// 함수로 최소공배수 리턴하기
// return least common multiple through function
// int 형 자연수 두 개를 입력받아 최소공배수
// (LCM, Least Common Multiple)를 출력하시오.
// 단, 함수형 문제이므로 함수 lcm()만 작성하여 제출하시오.
# include <stdio.h>
int a,b;
int gcd(int p,int q){
    if(p==0)
        return q;
    else
        return gcd(q%p,p);
}
long long int lcm(int,int);
long long int lcm(int p,int q){
    long long int min=p;
    long long int max=q;
    if(min>max){
        min=q;
        max=p;
    }
    return min*max/gcd(max,min);

}
int main() {
    scanf("%d %d",&a,&b);
    printf("%lld\n",lcm(a,b));
    return 0;
}