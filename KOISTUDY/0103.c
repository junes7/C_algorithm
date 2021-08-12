// 원의 넓이 구하기
// get area of circle
// 원의 지름의 길이 R을 입력받아서 원의 넓이를 구하는 프로그램을 작성.
// (단, PI는 3.14로 계산한다.)
# include <stdio.h>
int main() {
    int d;
    float PI=3.14,r;
    scanf("%d",&d);
    r=(float)d/2;
    printf("%.2f",PI*r*r);
    return 0;
}