// 별 그리기 6(draw star)
// 한 정수 N일 입력받아서 N층의 이등변 삼각형 모양의 별을 출력하시오
// (단 1 <= N <= 100 , 재귀함수로 작성하시오.)
# include <stdio.h>
void p(int n){
    if(n<1) return;
    else{
        printf("*");
        return p(n-1);
    }
}
void star(int n,int t,int c){  
    if(n<1) return;
    else{
        if(c<=t){
            p(c);
            printf("\n");
            return star(n-1,t,c+1);
        }else{
            p(n);
            printf("\n");
            return star(n-1,t,c+1);
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    star(2*n-1,n,1);
    return 0;
}