// 정수 한 개 입력받아 그 수까지 출력하기
// print number until one input integer
// 정수(0 ~ 100) 한 개를 입력받아 0부터 그 수까지 순서대로 출력해보자.
# include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        printf("%d\n",i);
    return 0;
}