#include<stdio.h>
// method1
// int main(void){
//     char str[50];
//     int i=0;
//     printf("���ڿ� �Է�: ");
//     scanf("%s",str);
//     printf("�Է� ���� ���ڿ�: %s\n",str);
//     // while �ݺ��� �̿�
//     printf("���� ���� ���: ");
//     while(str[i]!='\0')
//         printf("%c",str[i++]);
// }
// method2
int main(void){
    char str[50];
    int i;
    printf("���ڿ� �Է�: ");
    scanf("%s",str);
    printf("�Է� ���� ���ڿ�: %s\n���� ���� ���: ",str);
    for(i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
}