// 수 삼각형 출력하기
// print number triangle
// 한 정수 n을 입력받아 n층의 수 삼각형을 출력하시오. (단, 반복문은
// 사용할 수 없다.)
# include <stdio.h>
int n;
void g(int k){
    if(k<=0) return;
    g(k-1);
    printf("%d ",k);
}
void f(int k){
    if(k<=0) return;
    f(k-1);
    g(k);
    printf("\n");
}
int main() {
    scanf("%d",&n);
    f(n);
    return 0;
}