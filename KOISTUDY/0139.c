// 문자열 뒤집기 I(NTTP)
// flip string
// 최대길이가 50이하인 문자열을 입력받아서 뒤집어 출력하는 프로그램을 작성.
# include <stdio.h>
# include <string.h>
int main() {
    char ch[50];
    int i;
    fgets(ch,50,stdin);
    for(i=strlen(ch)-1;i>=0;i--){
        printf("%c",ch[i]);
    }
    return 0;
}