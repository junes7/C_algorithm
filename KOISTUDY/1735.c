//  2차원 배열 달팽이 채우기 3
// fill 2D array with snail pattern
# include <stdio.h>
int main(){
    int n,m,i,j,b,c,r=1,l=0,d[110][110]={};
    scanf("%d %d",&n,&m);
    i=0,j=m;
    for(c=1;c<=n*m;){
        for(b=1;b<=n-l;b++){
            i+=r;
            d[i][j]=c++;
        }
        r=-r;
        for(b=1;b<m-l;b++){
            j+=r;
            d[i][j]=c++;
        }
        l++;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}