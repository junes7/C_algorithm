// 2차원 배열 순서대로 채우기 4
// fill 2D array in order
// method 1 with 2D array
# include <stdio.h>
int main() {
    int d[101][101]={};
    int n,i,j,t=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>0;j--){
            d[j][i]=t++;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}