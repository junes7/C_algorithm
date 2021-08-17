// 계단 뛰어 오르기
// jumping stairs
// 한 번에 계단을 1개 또는 2개 또는 3개를 뛰어 오를 수 있을 때,
// 한 정수 n을 입력받아 바닥(0번째 계단)에서 n번째 계단까지 도착할 수
// 있는 방법의 가짓수를 출력하시오. (단, 반복문은 사용할 수 없다.)
# include <stdio.h>
int n;
int f(int);
int f(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 4;
    else
        return f(n-1)+f(n-2)+f(n-3);
}
int main() {
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}