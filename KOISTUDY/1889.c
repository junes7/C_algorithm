// 재귀로 1부터 n까지 한 줄로 출력하기
// print 1 to n in one line with recursion
// 한 정수 n을 입력받아 1부터 n까지 한 줄로 출력하시오. (단, 반복문은
// 사용할 수 없다.)
# include <stdio.h>
int n;
void f(int,int);
void f(int n,int t){
    if(n<t) return;
    printf("%d ",t);
    f(n,t+1);
}
int main() {
    scanf("%d",&n);
    f(n,1);
    printf("\n");
    return 0;
}