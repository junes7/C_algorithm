// 실수 입력받아 둘째 자리까지 출력하기
// print to the second digit after input float number
// 실수(float) 1개를 입력받아 저장한 후, 저정되어 있는 값을 소수점 셋 째
// 자리에서 반올림하여 소수점 이하 둘 째 자리까지 출력하시오.
// %.3f와 같은 형식으로 지정하면, 소수점 이하 넷 째 자리에서 반올림하여
// 소수점 이하 셋 째 자리까지 출력하라는 의미이다.
// 실수 1개가 입력된다. | (%.2f를 이용하여 소수점 셋 째 자리에서 반올림
// 해, 소숫점 이하 둘째 자리까지 출력한다.)
# include <stdio.h>

int main() {
    float x;
    scanf("%f", &x);
    printf("%.2f", x);
    return 0;
}