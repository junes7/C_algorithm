// 주민번호 입력받아 형태 바꿔 출력하기
// print social security number with different type
// 주민번호는 다음과 같이 구성된다. XXXXXX-XXXXXXX
// 앞의 6자리는 생년월일(yymmdd)이고 뒤 7자리는 성별, 지역, 오류검출코드.
// 주민번호를 입력받아 형태를 바꿔 출력해보자.
# include <stdio.h>
int main() {
    int s1,s2;
    scanf("%d-%d",&s1,&s2);
    printf("%06d%07d",s1,s2);
    return 0;
}