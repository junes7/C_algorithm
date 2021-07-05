// 시간 입력받아 그대로 출력하기
// print Time as originally
// 어떤 형식에 맞추어 시간이 입력될 때, 그대로 출력하는 연습을 해보자.
// scanf() 함수는 지정한 형식(format)에 따라 입력받는 함수이다. 따라서,
// 입력받고자 하는 형식으로 표현해주면 된다.
// 시(hour)와 분(minute)이 ":"으로 구분되어 입력된다. | 입력받은 시간을
// "시:분" 형식으로 출력한다.
# include <stdio.h>

int main() {
    int h, m;
    scanf("%d:%d", &h, &m);
    printf("%d:%d", h, m);
    return 0;
}