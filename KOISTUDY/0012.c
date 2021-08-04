// 실수 한 개 입력받아 그대로 출력하기
// print one input real number
// 실수형(float)로 변수를 선언하고 그 변수에 실수값을 저장한 후 저장되어
// 있는 실수값을 출력해보자.
# include <stdio.h>
int main() {
    float f;
    scanf("%f",&f);
    printf("%.3f",f);
    return 0;
}