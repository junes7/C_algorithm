// 별 그리기 7(draw star)
// 한 정수 N일 입력받아서 N층의 삼각형 모양의 별을 출력하시오.
// (단 1 <= N < 10,000 ) 아래 그림은 N이 3인 경우이다.
// *
// **
// ***
# include <stdio.h>
# include <string.h>
int main() {
    int n,i,j;
    char t[10010]="";
    char c[]="*";
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        strcat(t,c);
        printf("%s\n",t);
    }
    return 0;
}