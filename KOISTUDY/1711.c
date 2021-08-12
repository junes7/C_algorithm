// 2차원 배열 순서대로 채우기 3
// fill 2D array in order
// method 1 without 2D array
// # include <stdio.h>
// int main() {
//     int n,i,j,t;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         t=i;
//         for(j=0;j<n;j++){
//             printf("%d ",t);
//             t+=n;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// method 2 with 2D array
# include <stdio.h>
int main() {
    int d[102][102]={};
    int n,i,j,t=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
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