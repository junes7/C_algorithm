// 함수로 false 또는 true 출력하기
// print false or true through function
// false 또는 true 를 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하시오.
# include <stdio.h>
int n;
void f(int n);
void f(int n){
    if(n==0)
        printf("false\n");
    else
        printf("true\n");
    return;
}
int main() {
    scanf("%d",&n);
    f(n);
    return 0;
}