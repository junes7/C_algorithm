// 홀수의 합(sum of odd number)
// 7개의 자연수가 주어질 때, 이들 중 홀수인 자연수들을 모두 찾아 그
// 합을 구하는 프로그램을 작성하시오. 예를 들어 12, 39, 40, 51, 75,
// 87, 92가 주어지면 이들 중 홀수는 39, 51, 75, 87 이며, 그 합은
// 39 + 51 + 75 + 87 = 252 가 된다.
# include <stdio.h>
int main() {
    int i,n,s=0;
    for(i=1;i<=7;i++){
        scanf("%d",&n);
        if(n%2==1)
            s+=n;
    }    
    if(s==0)
        printf("%d",-1);
    else
        printf("%d",s);
    return 0;
}