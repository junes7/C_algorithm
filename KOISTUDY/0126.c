// 최대 최솟값 구하기
// 반복문을 활용한 대표적인 알고리즘이 최대값과 최소값을 찾는 문제이다.
// 이 문제의 목적은 주어진 수열에서 최소값, 최대값, 최소값의 위치,
// 최대값의 위치를 찾는 것이다. 이 문제를 통하여 반복문의 연습이 될
// 것이다.
# include <stdio.h>
int d[10010]={};
int main(){
    int n,i,max=0,min=10000,maidx,miidx;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&d[i]);
        if(max<d[i]){
            max=d[i];
            maidx=i;
        }
        if(min>d[i]){
            min=d[i];
            miidx=i;
        }
    }
    printf("%d : %d\n",maidx,max);
    printf("%d : %d\n",miidx,min);
}