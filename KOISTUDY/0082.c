// 3 6 9 게임의 왕이 되자.
// become king of 3 6 9 game
// 3 6 9 게임을 하던 영일이는 3 6 9 게임에서 잦은 실수로 계속해서 벌칙을
// 받게 되었다. 3 6 9 게임의 왕이 되기 위한 마스터 프로그램을 작성.
# include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0)
            printf("X ");
        else
            printf("%d ",i);
    }
    return 0;
}