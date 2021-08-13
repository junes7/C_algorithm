// 함수로 zero 또는 non zero 출력하기
// print zero or non zero through function
// zero 또는 non zero 를 출력하시오. 단, 함수형 문제이므로 함수 f()만
// 작성하시오.
# include <stdio.h>
int n;
void f(int);
void f(int x){
    if(x==0)
        printf("zero\n");
    else
        printf("non zero\n");
}
int main() {
    scanf("%d",&n);
    f(n);
    return 0;
}