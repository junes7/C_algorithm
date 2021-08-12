// 2차원 배열 순서대로 채우기 1
// fill 2D array in order
# include <stdio.h>
int main() {
    int n,i,j,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",c++);
        }
        printf("\n");
    }
    return 0;
}