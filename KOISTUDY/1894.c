// 서로 다른 n개 중에서 r개 순서 없이 고르기
// pick r without order between out of n different
// get the result of combination
// 서로 다른 n개 중에서 r개를 순서 없이 고르는 방법의 가짓수를 출력.
// (단, 반복문은 사용할 수 없다.) 예를 들어 1, 2, 3 서로 다른 3개
// 중에 2개를 고를 수 있는 방법의 가짓수는 (1, 2), (2, 3), (1, 3)의
// 3가지이다.
// method 1 with memoization
# include <stdio.h>
int a,b;
int d[25][25]={};
int comb(int p,int q){
    if(p==q||q==0){
        return 1;
    }
    else if(d[p][q]!=0){
        return d[p][q];
    }
    else{
        d[p][q]=comb(p-1,q-1)+comb(p-1,q);
        return d[p][q];
    }
}
int main(){
    scanf("%d %d",&a,&b);
    printf("%d",comb(a,b));
}