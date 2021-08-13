// 함수로 가장 큰 값 위치 리턴하기
// return the largest value position through function
// 배열에서 가장 큰 값이 처음 나타나는 위치를 출력하시오. 단, 함수형
// 문제이므로 함수 f()만 작성하시오.
# include <stdio.h>
int n,d[110];
int f(){
    int m=d[0];
    for(int i=1;i<n;i++){
        if(m<d[i])
            m=d[i];
    }
    for(int i=0;i<n;i++){
        if(d[i]==m)
            return i+1;
    }
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&d[i]);
    }
    printf("%d\n",f());
}