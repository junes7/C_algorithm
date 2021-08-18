// 2차원 배열 지그재그 채우기 8
// fill 2D array with zigzag pattern
# include <stdio.h>
int d[110][110]={};
int main() {
    int n,m,i,j,t=1;
    scanf("%d %d",&n,&m);
    for(i=m;i>0;i--){
        if(m%2==0){
            if(i%2==0){
                for(j=1;j<=n;j++){
                    d[j][i]=t++;
                }
            }else{
                for(j=n;j>0;j--){
                    d[j][i]=t++;
                }
            }
        }else{
            if(i%2==1){
                for(j=1;j<=n;j++){
                    d[j][i]=t++;
                }
            }else{
                for(j=n;j>0;j--){
                    d[j][i]=t++;
                }
            }
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