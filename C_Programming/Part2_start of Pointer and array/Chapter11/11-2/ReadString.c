#include<stdio.h>
// method1
// int main(void){
//     char str[50];
//     int i=0;
//     printf("문자열 입력: ");
//     scanf("%s",str);
//     printf("입력 받은 문자열: %s\n",str);
//     // while 반복문 이용
//     printf("문자 단위 출력: ");
//     while(str[i]!='\0')
//         printf("%c",str[i++]);
// }
// method2
int main(void){
    char str[50];
    int i;
    printf("문자열 입력: ");
    scanf("%s",str);
    printf("입력 받은 문자열: %s\n문자 단위 출력: ",str);
    for(i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
}