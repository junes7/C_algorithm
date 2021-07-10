// 정수 1개 입력받아 평가 출력하기
// print evaluation of one input integer
// 점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.
// 평가 기준
// 점수 범위 : 평가
// 90 ~ 100 : A
// 70 ~   89 : B
// 40 ~   69 : C
//  0 ~   39 : D로 평가되어야 한다.
// 정수(0 ~ 100) 1개가 입력된다. | 평가 결과를 출력한다.
// method 1
# include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);
    if (s >= 90 && s <= 100) {
        printf("A");
    } 
    else if (s >= 70 && s <= 89) {
        printf("B");
    }
    else if (s >= 40 && s <= 69) {
        printf("C");
    }
    else {
        printf("D");
    }
    return 0;
}