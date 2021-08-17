// 재귀로 n번째 피보나치 수 리턴하기
// return nth fibonacci number with recursion
// 한 정수 n을 입력받아 n번째 피보나치 수를 출력하시오.
// (단, 반복문은 사용할 수 없다.)
# include <stdio.h>
int n;
int f(int);
int f(int n){
    if(n<=2)
        return 1;
    else
        return f(n-1) + f(n-2);
}
int main(){
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}