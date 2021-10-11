// villa[4][2],popu,i,j for 2D array
#include<stdio.h>
int main(void){
    int popu,i,j,villa[4][2];
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            printf("%d類 %d�� 檣掘熱: ",i+1,j+1);
            scanf("%d",&villa[i][j]);
        }
    }
    for(i=0;i<4;i++){
        popu=0;
        popu+=villa[i][0];
        popu+=villa[i][1];
        printf("%d類 檣掘熱: %d\n",i+1,popu);
    }
}