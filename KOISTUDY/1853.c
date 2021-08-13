// 함수로 odd 또는 even 출력하기
// print odd or even through function
// odd 또는 even 을 출력하시오. 단, 함수형 문제이므로
// 함수 f()만 작성하시오.
# include <stdio.h>
int n;
void f(int k);
void f(int k){
    if(k%2==1)
        printf("odd\n");
    else
        printf("even\n");
    return;
}
int main() {
    scanf("%d",&n);
    f(n);
    return 0;
}