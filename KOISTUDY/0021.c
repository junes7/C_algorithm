// 문장 한 개 입력받아 그대로 출력하기
// print one input sentence
// 공백이 포함되어 있는 한 문장을 입력받아 그대로 출력하는 연습을 해보자.
// 공백이 포함되어 있는 한 문장이 입력된다. 입력되는 문장은 여러 개의
// 단어로 구성되고, 엔터로 끝나며, 최대 길이는 2000 문자를 넘지 않는다.
// fgets( ) 를 사용하면 공백문자가 있는 문장을 입력받아 저장할 수 있다.
// fgets(d,2000,stdin)
# include <stdio.h>
int main() {
    char d[2000];
    fgets(d,2000,stdin);
    printf("%s",d);
    return 0;
}