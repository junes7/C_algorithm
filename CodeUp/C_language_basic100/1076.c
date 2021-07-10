// 문자 1개 입력받아 알파벳 출력하기
// print alphabet until one input character
// 영문자(a ~ z) 1개가 입력되었을 때 그 문자까지의 알파벳을 순서대로 출력.
// 영문자 1개가 입력된다. (a ~ z)
// a부터 입력한 문자까지 순서대로 공백을 두고 출력한다.
// method 1
# include <stdio.h>

int main() {
    char c, t = 'a';
    scanf("%c", &c);
    do {
        printf("%c ", t++);
    } while (t <= c);
    return 0;
}