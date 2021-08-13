// 함수로 가장 작은 값 리턴하기
// return the smallest value through function
// 배열에서 가장 작은 값을 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하시오.
# include <stdio.h>
long long int d[110];
long long int n;
long long int min,i;
long long int f();
long long int f(){
    min=d[1];
    for(i=2;i<=n;i++){
        if(min>d[i])
            min=d[i];
    }
    for(i=1;i<=n;i++){
        if(min==d[i])
            return i;
    }
}
int main() {
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&d[i]);
    }
    printf("%lld\n",f());
    return 0;
}