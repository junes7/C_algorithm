// 2차원 배열 지그재그 채우기 1
// fill 2D array with zigzag pattern
# include <stdio.h>
int d[110][110]={};
int main(){
    int n,i,j,t=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==1){
            for(j=1;j<=n;j++){
                d[i][j]=t++;
            }
        }else{
            for(j=n;j>0;j--){
                d[i][j]=t++;
            }
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