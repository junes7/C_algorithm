// 3의 배수는 통과?
// pass multiple of three
// 1부터 입력한 정수까지 1씩 증가시켜 출력하는 프로그램을 작성하되, 3의
// 배수인 경우는 출력하지 않도록 만들어보자. 예를 들면,
// 1 2 4 5 7 8 10 11 13 14 ...와 같이 출력하는 것이다.
# include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3!=0)
            printf("%d ",i);
    }
    return 0;
}