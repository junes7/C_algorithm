//  2차원 배열 달팽이 채우기 4
// fill 2D array with snail pattern
// 입력이 3 4인 경우 다음과 같이 출력한다.
// 5 4 3 12
// 6 1 2 11
// 7 8 9 10
# include <stdio.h>
int main(){
    int n,m,i,j,b,c,r=1,l=0,d[110][110]={};
    scanf("%d %d",&n,&m);
    i=0,j=m;
    for(c=n*m;c>0;){
        for(b=1;b<=n-l;b++){
            i+=r;
            d[i][j]=c--;
        }
        r=-r;
        for(b=1;b<m-l;b++){
            j+=r;
            d[i][j]=c--;
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