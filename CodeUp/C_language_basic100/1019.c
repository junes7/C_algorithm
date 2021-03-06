// 연월일 입력받아 그대로 출력하기
// print year/month/day as original form
// 년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자.
// 연, 월, 일이 ".(닷)"으로 구분되어 입력된다. 입력받은 연, 월, 일을
// yyyy.mm.dd 형식으로 출력한다.(%02d를 사용하면 2칸을 사용해 출력하는데,
// 한 자리 수인 경우 앞에 0을 붙여 출력한다.)
# include <stdio.h>

int main() {
    int y, m, d;
    scanf("%d.%d.%d", &y, &m, &d);
    printf("%04d.%02d.%02d", y, m, d);
    return 0;
}