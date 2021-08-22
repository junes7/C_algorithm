// 최대값 I(maximum value)
// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최대값을 찾고 그
// 최대값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
// 예를 들어, 서로 다른 9개 자연수 3, 29, 38, 12, 57, 74, 40, 85, 61
// 이 주어지면 이들 중 최대값은 85이고, 이 값은 8번째 수이다.
# include <stdio.h>
int main() {
    int max=0,idx,i,n;
    for(i=1;i<=9;i++){
        scanf("%d",&n);
        if(max<n){
            max=n;
            idx=i;
        }
    }
    printf("%d\n%d",max,idx);
    return 0;
}