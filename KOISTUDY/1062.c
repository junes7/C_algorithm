// 별 그리기 14(draw star)
// 경곽이는 다이아몬드를 매우 좋아한다. 따라서 다이아몬드 패턴을 만드는
// 연습을 하고 있다. 101이하의 임의의 홀수를 입력받아서 다이아몬드
// 문양을 출력하는 프로그램을 작성하시오. 예를 들어 3일 경우는 다음과
// 같이 출력하면 된다.
# include <stdio.h>
int main() {
    int i,j,n,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i<(n-1)/2){
            for(j=0;j<n;j++){
                if(j>=n/2-t&&j<=n/2+t){
                    printf("*");
                }else{
                    printf(".");
                }
            }
            t++;
        }else{
            for(j=0;j<n;j++){
                if(j>=n/2-t&&j<=n/2+t){
                    printf("*");
                }else{
                    printf(".");
                }
            }
            t--;
        }
        printf("\n");
    }
    return 0;
}