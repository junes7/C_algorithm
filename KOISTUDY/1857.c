// 함수로 prime 또는 composite 출력하기
// print prime or composite through function
// prime 또는 composite 중 하나를 출력하시오. 단, 함수형 문제이므로
// 함수 f()만 작성하시오.
# include <stdio.h>
int n;
void f(int);
void f(int n){
    int c=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==1)
        printf("prime\n");
    else
        printf("composite\n");
}
int main() {
    scanf("%d",&n);
    f(n);
    return 0;
}