// 2차원 배열 순서대로 채우기 2
// fill 2D array in order
# include <stdio.h>
int main() {
    int n,i,j,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=n*i;
        for(j=1;j<=n;j++){
            printf("%d ",c--);
        }
        printf("\n");
    }
    return 0;
}