#include<stdio.h>
int main(void){
    char st[]="Good time";
    int i,arrLen=sizeof(st)/sizeof(char);
    for(i=0;i<arrLen;i++)
        printf("%c",st[i]);
    printf("\n");
}