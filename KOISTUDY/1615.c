// 누적합 II(prefix sum)
// n행 m열의 자료가 주어진다. 이 자료들을 이용하여 누적합 테이블을 만들어
// 보자. 누적합 테이블이란 (1, 1)부터 현재 위치까지의 모든 원소들의 합을
// 저장한 테이블을 말한다. 누적합 테이블 (x, y)의 값은 원래 테이블
// (1, 1), (1, 2), ... , (1, y)
// (2, 1), (2, 2), ... , (2, y)
//        :
// (x, 1), (x, 2), ... , (x, y)
// 의 모든 원소의 합을 저장한다.
// 자료테이블이 주어질 때, 누적합 테이블을 출력하는 프로그램을 작성하시오.
# include <stdio.h>
int d[1010][1010]={};
int s[1010][1010]={};
int a[1010]={};
int main() {
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&d[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(j==1){
                a[j]+=d[i][j];
                s[i][j]=a[j];          
            }else{
                a[j]+=d[i][j];
                s[i][j]=s[i][j-1]+a[j];
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}