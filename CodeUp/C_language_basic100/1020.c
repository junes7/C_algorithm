// 주민번호 입력받아 형태 바꿔 출력하기
// print with change the format after input social security number
// 주민번호는 다음과 같이 구성된다. xxxxxx-xxxxxxx
// 앞의 6자리는 생년월일(yymmdd)이고 뒤 7자리는 성별, 지역, 오류검출코드이다.
// 주민번호를 입력받아 형태를 바꿔 출력해보자.
// 주민번호 앞 6자리와 뒷 7자리가 '-'로 구분되어 입력된다.(입력값은 가상의
// 주민번호이다.) | '-'를 제외한 주민번호 13자리를 모두 붙여 출력한다.
# include <stdio.h>

int main() {
    int ssn1, ssn2;
    scanf("%d-%d", &ssn1, &ssn2);
    printf("%06d%07d", ssn1, ssn2);
    return 0;
}