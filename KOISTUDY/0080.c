// 주사위를 2개 던지면?
// if you roll two dices?
// 1부터 n까지, 1부터 m까지 숫자가 적힌 서로 다른 주사위 2개를 던졌을 때
// 나올 수 있는 모든 경우를 출력해보자.
# include <stdio.h>
int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d %d\n",i,j);
        }
    }
    return 0;
}