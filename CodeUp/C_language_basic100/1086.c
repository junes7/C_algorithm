// 그림 파일 저장용량 계산하기
// calculate the storage of image file
// 이미지의 가로 해상도 w, 세로 해상도 h, 한 픽셀을 저장하기 위한 비트 b 가
// 주어질 때, 압축하지 않고 저장하기 위해 필요한 저장 용량을 계산하는
// 프로그램을 작성해 보자.
// w, h, b 가 공백을 두고 입력된다.
// 단, w, h는 모두 정수이고 1~1024 이다. b는 40이하의 4의 배수이다.
// 필요한 저장 공간을 MB 단위로 바꾸어 출력한다.
// 소수점 이하 셋째 자리에서 반올림해 둘째 자리까지 출력한 뒤 MB를 출력한다.
// method 1
# include <stdio.h>

int main() {
    int w, h, b;
    float r;
    scanf("%d %d %d", &w, &h, &b);
    r = (float)w * h * b / (8 * 1024 * 1024);
    printf("%.2f MB", r);
    return 0;
}