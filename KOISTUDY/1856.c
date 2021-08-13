// 함수로 negative/zero/positive 출력하기
// print negative/zero/positive through function
// negative, zero, positive 중 하나를 출력하시오. 단, 함수형 문제이므로
// 함수 f()만 작성하시오.
# include <stdio.h>
int n;
void f(int);
void f(int x){
    if(x<0)
        printf("negative\n");
    else if(x==0)
        printf("zero\n");
    else
        printf("positive\n");
}
int main() {
    scanf("%d",&n);
    f(n);
    return 0;
}