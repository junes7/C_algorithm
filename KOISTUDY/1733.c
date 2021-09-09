//  2차원 배열 달팽이 채우기 1
// fill 2D array with snail pattern
# include <stdio.h>
int main(){
    int n,m,i=1,j=0,b,c,r=1,l=0,d[110][110]={};
    scanf("%d %d",&n,&m);
    for(c=1;c<=n*m;){
        // 행 고정,열 증가
        for(b=1;b<=m-l;b++){
            j+=r;
            d[i][j]=c++;
        }
        // 열 고정,행 증가
        for(b=1;b<n-l;b++){
            i+=r;
            d[i][j]=c++;
        }
        l++;
        r=-r;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}