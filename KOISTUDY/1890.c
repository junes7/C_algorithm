// 재귀로 1부터 n까지 합 리턴하기
// return sum of 1 to n with recursion
// 한 정수 n을 입력받아 1부터 n까지의 정수 합을 출력하시오. (단,
// 반복문은 사용할 수 없다.)
# include <stdio.h>
int n;
int f(int n){
    if(n<=1) return 1;
    return n+f(n-1);
}
int main() {
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}