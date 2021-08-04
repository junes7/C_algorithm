// 시간 입력받아 그대로 출력하기
// print input time
# include <stdio.h>
int main() {
    int h,m;
    scanf("%d:%d",&h,&m);
    printf("%d:%02d",h,m);
    return 0;
}