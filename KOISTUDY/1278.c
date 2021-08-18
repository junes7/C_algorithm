// 함수로 최대공약수 구하기
// get gcd(greatest common divisor) through function
// 두 정수 a, b를 입력받아서, a, b의 최대공약수를 출력하시오.
# include <stdio.h>
int get_gcd(int x,int y){
    int t;
    if(x<y){
        t=x;
        x=y;
        y=t;
    }
    if(y==0)
        return x;
    else
        return get_gcd(y,x%y);
}
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",get_gcd(x,y));
    return 0;
}