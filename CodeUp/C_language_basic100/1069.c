// 평가 입력받아 다르게 출력하기
// take the evaluation character and print it differently
// 평가를 문자(A, B, C, D, ...)로 입력받아 내용을 다르게 출력해보자.
// 평가 내용
// 평가 : 내용
// A : best!!!
// B : good!!
// C : run!
// D : slowly~
// 나머지 문자들 : what?
// 영문자 1개가 입력된다. (A, B, C, D 등의 한 문자가 입력된다.)
// 평가내용에 따라 다른 내용이 출력된다.
// switch case statement 사용할 것!
// method 1
# include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    switch (c) {
        case 'A':
            printf("best!!!");
            break;
        case 'B':
            printf("good!!");
            break;
        case 'C':
            printf("run!");
            break;
        case 'D':
            printf("slowly~");
            break;
        default:
            printf("what?");
    }
    return 0;
}