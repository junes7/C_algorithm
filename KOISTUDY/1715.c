// 2차원 배열 순서대로 채우기 7
// fill 2D array in order
# include <stdio.h>
int main() {
    int d[101][101]={};
    int n,m,i,j,t=1;
    scanf("%d %d",&n,&m);
    for(j=m;j>0;j--){
        for(i=n;i>0;i--){
            d[i][j]=t++;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}