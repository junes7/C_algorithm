// 최대값 II(maximum value)
// 9×9 격자판에 쓰여진 81개의 자연수가 주어질 때, 이들 중 최대값을
// 찾고 그 최대값이 몇 행 몇 열에 위치한 수인지 구하는 프로그램을
// 작성하시오. 예를 들어, 다음과 같이 81개의 수가 주어지면
// 이들 중 최대값은 90이고, 이 값은 5행 7열에 위치한다.
# include <stdio.h>
int main(){
    int i,j,max=0,xidx,yidx,n;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            scanf("%d",&n);
            if(max<n){
                max=n;
                xidx=i;
                yidx=j;
            }
        }
    }
    printf("%d\n%d %d",max,xidx,yidx);
    return 0;
}