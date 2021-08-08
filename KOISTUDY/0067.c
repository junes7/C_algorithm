// 정수 한 개 입력받아 평가 출력하기
// print evaluation of one input integer
// 점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.
// 점수 범위 : 평가
//  90 ~ 100 : A
//  70 ~  89 : B
//  40 ~  69 : C
//    0 ~  39 : D
// 로 평가되어야 한다.
# include <stdio.h>
int main() {
    int s;
    scanf("%d",&s);
    if(s>=90)
        printf("A");
    else if(s>=70)
        printf("B");
    else if(s>=40)
        printf("C");
    else
        printf("D");
    return 0;
}