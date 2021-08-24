// 구간 합/갱신 놀이
// play prefix sum/update
// n명의 학생들은 각자 자신만의 수를 하나씩 가지고 일렬로 서 있다.
// 오늘 게임은 n명의 학생들 중에서 a번째부터 b번째 학생들이 가진 수의
// 합을 구하는 것이다. 이 게임이 매우 쉬웠던지 지학, 한필이가 너무
// 쉽게 문제를 해결하고 놀고 있는 것이 못마땅하였다.
// 이에 기존에 일렬도 서 있는 학생들 중에서 원하는 학생이 가진 수를
// 바꾸는 규칙을 추가했다.
// 즉, 게임에서 주어진 규칙이 1이면 a, b 구간의 합을 출력하고, 2이면
// p번째 학생이 가진 수를 q로 변경하는 것이다.
// 예를 들어, 3 5 2 1 4 3 의 각 수를 가지고 있는 6명의 학생이 일렬로
// 서 있고, 규칙 1 2 4 가 주어지면 2번째 학생부터 4번째 학생까지 3명의
// 학생이 가진 수의 합인 8을 출력한다.
// 만약 2 3 10 이 주어지면 3번째 학생이 가진 수를 10 으로 변경한다.
// 게임이 m번 진행되는 동안 각 게임에서의 결과를 출력하는 프로그램을
// 작성하시오.
# include <stdio.h>
long long int d[1000010]={};
long long int s[100010]={};
void update(long long int d[],int a,int n,int c){
    int j;
    for(j=a;j<=n;j++){
        d[j]+=c;
    }
}
int main() {
    int i,n,m,t,a,b;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%lld",&d[i]);
        d[i]+=d[i-1];
    }
    for(i=1;i<=m;i++){
        scanf("%d %d %d",&t,&a,&b);
        if(t==1)
            s[i]=d[b]-d[a-1];
        else{
            t=d[a]-d[a-1];
            update(d,a,n,b-t);
        }
    }
    for(i=1;i<=m;i++){
        if(s[i]!=0)
            printf("%lld\n",s[i]);
    }
    return 0;
}