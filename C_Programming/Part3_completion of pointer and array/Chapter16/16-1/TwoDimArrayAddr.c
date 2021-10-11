// allocate memory space in reality
#include<stdio.h>
int main(void){
    int i,j,arr[3][2];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
            printf("%p\n",&arr[i][j]);
    }
}