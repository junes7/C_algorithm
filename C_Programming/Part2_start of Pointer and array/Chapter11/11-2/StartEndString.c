// string: I like C programming
// string: I like C 9��° ��
// string: I like 7��° ��
// string: I 2��° ��
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