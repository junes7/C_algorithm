// 진법변환(재귀)
// convert notation(recursion)
// 현재 우리가 일반적으로 사용하고 있는 진법은 10진법이다. 즉 0, 1, 2, 3,
// 4, 5, 6, 7, 8, 9로 구성된 10개의 기호로 모든 수를 표현한다. 하지만
// 디지털의 세계에서는 0, 1로만 구성된 2진법과 이를 쉽게 표현하기 위한
// 16진법을 사용한다. 2진법은 0, 1의 2가지 기호, 16진법은
// 0,1,2,3,4,5,6,7,8,9, A, B, C, D, E, F로 구성된 16가지 기호로 모든
// 숫자를 표현한다. 이 문제의 목적은 주어진 10진수 n을 k진법의 수로
// 변환하는 것이다. 단, 재귀함수로 작성하시오.
# include <stdio.h>
int conv(int d[100],int n,int i,int k){
    if(n<=0) return i;
    else{
        d[i++]=n%k;
        return conv(d,n/k,i,k);
    }
}
void print(int d[100],int t,int k){
    if(t<1) return;
    if(k==2){
        printf("%d",d[t]);
        return print(d,t-1,k);
    }else{ 
        if(d[t]<10)
            printf("%c",d[t]+48);
        else
            printf("%c",d[t]+55);
    }
    return print(d,t-1,k);
}
int main() {
    int d[100]={};
    int t,n,k;
    scanf("%d %d",&n,&k);
    if(k==2){
        t=conv(d,n,1,k);
        print(d,t-1,k);
    }else{
        t=conv(d,n,1,k);
        print(d,t-1,k);
    }
    return 0;
}