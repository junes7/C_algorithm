// 별 그리기 4(NTTP) (draw star)
// 한 정수 N일 입력받아서 2*N-1개의 별을 일렬로 그리시오.
// ( 단 1 <= N <= 100 , 재귀함수로 작성하시오.)
# include <stdio.h>
void star(int t){
    if(t<1)
        return;
    else{
        printf("*");
        return star(t-1); 
    }
}
int main() {
    int n;
    scanf("%d",&n);
    star(2*n-1);
    return 0;
}