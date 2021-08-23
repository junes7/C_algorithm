// 두 개씩 묶어 작은 값 골라 배열 만들기
// create array with a larger value after tie two
// n개의 데이터를 배열에 입력 받은 후, 두 개씩 묶어 비교한 후, 큰 값만
// 들어간 배열을 만들고 출력해보자. 6개의 데이터가 다음과 같이
// 입력되었을 때, 1 2 3 4 5 6 아래와 같이 출력하면 된다. 2 4 6
// k번째 위치에 저장되어야 하는 값은 다음과 같이 표현할 수도 있다.
// m[k] = max(m[2*k], m[2*k+1]); //k >= 0
# include <stdio.h>
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int main() {
    int i,n,m[100]={};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    for(i=0;i<n/2;i++){
        printf("%d ",max(m[2*i],m[2*i+1]));
    }
    return 0;
}