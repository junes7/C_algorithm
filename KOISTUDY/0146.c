// 1~n까지의 합 (Recursion Version)
// sum of 1 to n
// 한 정수 n을 입력받아서 1부터 n까지의 합을 구하여 출력하시오.
// (반복문은 사용할 수 없습니다.)
# include <stdio.h>
int sum(int n,int s){
    if(n<1) return s;
    else{
        s+=n;
        return sum(n-1,s);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sum(n,0));
    return 0;
}