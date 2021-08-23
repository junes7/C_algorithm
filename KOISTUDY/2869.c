// 1차원 배열 활용 1
// 1D array utilization
// 에라토스테네스의 체 활용하기
# include <stdio.h>
int main() {
    int n,i,j,k=1,d[550]={},p[100]={};
    for(i=2;i<=550;i++){
        d[i]=i;
    }
    for(i=2;i<=550;i++){
        if(d[i]==0) continue;
        for(j=i+i;j<=550;j+=i){
            d[j]=0;
        }
    }
    for(i=2;i<550;i++){
        if(d[i]!=0)
            p[k++]=d[i];
    }
    scanf("%d",&n);
    for(i=1;i<=100;i++){
        if(i==n){
            printf("%d ",p[i]);
            break;
        }
    }
    return 0;
}