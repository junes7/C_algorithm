// 1차원 배열 기초 연습 1
// pratice of 1D array basic
// 배열은 여러 개의 같은 형의 변수를 하나의 이름으로 관리하는 자료구조이다.
// 배열의 각 원소는 배열이름[인덱스] 로 자료를 저장하거나 불러올 수 있다.
// 이 문제는 n 개의 정수를 배열에 저장하고 출력하는 문제이다.
// n개의 정수를 입력받고 차례로 출력하는 프로그램을 작성하시오.
# include <stdio.h>
int main() {
    int i,n,d[110]={};
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&d[i]);
    }
    for(i=1;i<=n;i++){
        printf("%d ",d[i]);
    }
    return 0;
}