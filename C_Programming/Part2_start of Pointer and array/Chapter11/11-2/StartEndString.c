// string: I like C programming
// string: I like C 9번째 널
// string: I like 7번째 널
// string: I 2번째 널
#include<stdio.h>
int main(void){
    char str[50]="I like C programming";
    printf("string: %s\n",str);
    str[8]='\0';
    printf("string: %s\n",str);
    str[6]='\0';
    printf("string: %s\n",str);
    str[1]='\0';
    printf("string: %s\n",str);
}