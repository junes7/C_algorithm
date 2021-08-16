// 재귀로 * n개 한 줄로 출력하기
// print * n times in one line with recursion
// 한 정수 n을 입력받아 n개의 별(*)을 출력하시오. (단, 반복문은
// 사용할 수 없다.)
# include <stdio.h>
int n;
void f(int);
void f(int n){
    if(n<=0)
        return;
    f(n-1);
    printf("*");
}
int main(){
    scanf("%d",&n);
    f(n);
    printf("\n");
    return 0;
}