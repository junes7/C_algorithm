// 원하는 문자가 입력될 때까지 반복 출력하기
// print repeatedly until entering a wanted character
// q 가 입력될 때까지 입력한 문자를 계속 출력하는 프로그램을 작성해보자.
// method 1 with while loop
# include <stdio.h>
int main() {
    char c;
    while(c!='q'){
        scanf("%c",&c);
        if(c!=' ')
            printf("%c\n",c);
    }
    return 0;
}