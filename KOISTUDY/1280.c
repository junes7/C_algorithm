// 함수로 수 뒤집기
// flip number through function
// 하나의 정수가 입력된다. 이 정수를 뒤집어서 출력하는 프로그램을 작성.
// 예를 들어 입력되는 정수가 123이라면 321을 출력하면 된다. 단,
// 12300이 입력될 경우 00321을 출력하는 것이 아니라 321을 출력해야
// 함에 주의해야 한다.
# include <stdio.h>
int d[5]={};
int f(int n){
    int r=1,i=1,t=0;
    while(n>0){
        d[i++]=n%10;
        n/=10;
        r*=10;
    }
    for(int j=1;j<=i-1;j++){
        r/=10;
        t+=d[j]*r;
    }
    return t;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}