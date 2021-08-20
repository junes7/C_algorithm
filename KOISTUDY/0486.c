// 별 그리기 8(draw star)
// 한 정수 N일 입력받아서 N층의 삼각형 모양의 별을 출력하시오.
// (단, 반드시 재귀함수로 작성하시오.)
// (단 1 <= N < 10,000 ) 아래 그림은 N이 3인 경우이다.
// *
// **
// ***
# include <stdio.h>
# include <string.h>
char t[10010]="";
char c[]="*";
void star(int n,char t[],char c[]){
    if(n<1) return;
    strcat(t,c);
    printf("%s\n",t);
    return star(n-1,t,c);
}
int main() {
    int n,i,j;
    scanf("%d",&n);
    star(n,t,c);
    return 0;
}