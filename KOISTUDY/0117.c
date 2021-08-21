// 1~n사이의 소수의 합 구하기
// 임의의 한 정수 n을 입력받아서, [1,n]범위에서 소수의 합을 출력하시오.
// [a, b] 는 a이상 b이하를 의미한다. [a, b)는 a이상 b미만의 범위를 의미함.
# include <stdio.h>
# include <stdbool.h>
bool isPrime(int n){
    int c=0;
    for(int i=2;i<=n;i++){
        if(n%i==0)
            c+=1;
    }
    if(c==1)
        return true;
    else
        return false;
}
int main() {
    int n,i,j,s=0;
    scanf("%d",&n);
    if(n<=1) s=0;
    else{
        for(i=2;i<=n;i++){
            if(isPrime(i))
                s+=i;
        }
    }
    printf("%d",s);
    return 0;
}