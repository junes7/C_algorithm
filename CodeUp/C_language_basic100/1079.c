// 원하는 문자가 입력될 때까지 반복 출력하기
// print repeatedly until wanted character is entered
// 'q'가 입력될 때까지 입력한 문자를 계속 출력하는 프로그램을 작성해보자.
// do while로 풀 것
// 문자들이 1개씩 계속해서 입력된다.
// 'q'가 입력될 때까지 입력된 문자를 줄을 바꿔 한 줄씩 출력한다.
// method 1
# include <stdio.h>

int main() {
    char c;
    do {
        scanf("%c ", &c); 
        printf("%c\n", c);
    } while (c!='q');
    return 0;
}