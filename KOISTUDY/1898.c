// 파스칼의 삼각형 출력하기 2
// print pascal's triangle
# include <stdio.h>
int n,a=0,b=0;
int p(int n,int k){
    if(k==0||k==n)
        return 1;
    else
        return p(n-1,k-1)+p(n-1,k);
}
void g(int k){
    if(k<=0) return;
    g(k-1);
    printf("%d ",p(a,b));
    if(a==b){
        b=0;
        a++;
    }
    else if(a!=b&&a>b){
        b++;
    }
}
void f(int k){
    if(k<=0) return;
    f(k-1);
    g(k);
    printf("\n");
}
int main() {
    scanf("%d",&n);
    f(n);
    return 0;
}