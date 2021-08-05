// 단어 한 개 입력받아 나누어 출력하기
// print one input word separately
// 단어를 하나 입력받는다. 입력받은 단어(영어)의 각 문자를 한줄에 한
// 문자씩 분리해 출력한다.
// 공백이 아닐때 출력(d[i]!='\0')
# include <stdio.h>
int main() {
    char d[21];
    scanf("%s",d);
    for(int i=0;d[i]!='\0';i++){
        printf("\'%c\'\n",d[i]);
    }
}