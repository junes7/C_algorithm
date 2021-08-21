// 배열 채우기 III
// fill 2D array with sequence order
// 한 정수 n을 입력받아서 이차원 배열 n*n을 달팽이 모양으로 채워서
// 출력하는 프로그램을 작성하시오.
// n=3인 예
// 1 2 3
// 8 9 4
// 7 6 5
// n=5인 예
// 1 2 3 4 5
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9
# include <stdio.h>
int d[110][110]={};
int main() {
    int n,f,b,c=1,i=1,j=0,k=1;
    scanf("%d",&n);
    f=n;
    while(1){
        // 행 고정, 열 증가
        for(b=1;b<=f;b++){
            j+=c;
            d[i][j]=k++;
        }
        f-=1;
        if(f<0)
            break;
        // 열 고정, 행 증가
        for(b=1;b<=f;b++){
            i+=c;
            d[i][j]=k++;
        }
        c*=-1;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}