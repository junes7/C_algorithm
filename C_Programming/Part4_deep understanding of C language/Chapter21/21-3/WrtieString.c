#include<stdio.h>
int main(void){
    // puts와 fputs의 차이를 알 수 있다.
    char *str="Simple String";
    printf("1. puts test ------\n");
    puts(str);
    puts("So Simple String");
    printf("2. fputs test ------\n");
    fputs(str,stdout);printf("\n");
    fputs("So Simple String",stdout);printf("\n");
    printf("3. end of main ------\n");
}