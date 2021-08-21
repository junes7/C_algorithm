// 2차원 누적 합 배열 만들기
// create 2D cumulative sum array
// n*m개의 데이터를 배열에 입력 받은 후, (1, 1) 데이터 ~ (n, m) 영역의
// 누적 합 배열을 만들고 출력해보자.
// 3*5개의 데이터가 다음과 같이 입력되었을 때,
// 1 2 3 4 5
// 5 4 3 2 1
// 1 5 2 4 3
// 아래와 같이 출력하면 된다.
// 1 3 6 10 15
// 6 12 18 24 30
// 7 18 26 36 45
// (i, j) 위치에 저장되어야 하는 값의 관계식은 어떻게 표현할 수 있을까?
// s[i][j] = ?
# include <stdio.h>
int d[110][110]={};
int s[110][110]={};
int a[110]={};
int main() {
    int n,m,i,j,k,t;
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