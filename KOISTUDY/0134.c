// 배열 채우기 II
// fill 2D array with sequence order
// 한 정수 n을 입력받아서 이차원 배열 n*n을 아래와 같이 "ㄹ"자로 채워서 출력하는 프로그램을 작성하시오.
// n=3인 예
// 1 2 3
// 6 5 4
// 7 8 9
// n=5인 예
// 1 2 3 4 5
// 10 9 8 7 6
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25
# include <stdio.h>
int d[110][110]={};
int main() {
    int n,i,j,t=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            for(j=n;j>0;j--){
                d[i][j]=t++;
            }
        }else{
            for(j=1;j<=n;j++){
                d[i][j]=t++;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}