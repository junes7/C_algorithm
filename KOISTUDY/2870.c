// 1차원 배열 활용 2
// 1D array utilization
// 에라토스테네스의 체 활용하기
// 배열은 여러 개의 같은 형의 변수를 하나의 이름으로 관리하는 자료구조이다.
// 배열의 각 원소는 배열이름[인덱스] 로 자료를 저장하거나 불러올 수 있다.
// 이 문제는 k번째 소수를 구하는 문제이다. 그리고 위 질문을 n번 시행한다.
// 각 n번의 질문에 대해서 해당 소수를 출력하는 프로그램을 작성하시오.
# include <stdio.h>
int main() {
    int n,i,j,k=1,d[550]={},p[100]={},idx[100010]={};
    for(i=2;i<=550;i++){
        d[i]=i;
    }
    for(i=2;i<=550;i++){
        if(d[i]==0) continue;
        for(j=i+i;j<=550;j+=i){
            d[j]=0;
        }
    }
    for(i=2;i<=550;i++){
        if(d[i]!=0)
            p[k++]=d[i];
    }
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&idx[i]);
    }
    for(i=1;i<=n;i++){
        printf("%d\n",p[idx[i]]);
    }
    return 0;
}