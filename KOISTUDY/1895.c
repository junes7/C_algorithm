// 파스칼의 삼각형 출력하기 1
// print pascal's triangle
# include <stdio.h>
int n,k;
int d[25][25]={};
int pascal(int,int);
int pascal(int n,int k){
    if(k==1||k==n){
        d[n][k]=1;
        return d[n][k];
    }
    else{
        d[n][k]=pascal(n-1,k-1)+pascal(n-1,k);
        return d[n][k];
    }
}
int main() {
    scanf("%d %d",&n,&k);
    printf("%d",pascal(n,k));
    return 0;
}