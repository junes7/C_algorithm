// 문자 한 개 입력받아 알파벳 출력하기
// print alphabet until one input character
// method 1 with while loop
// # include <stdio.h>
// int main() {
//     char c,a='a';
//     scanf("%c",&c);
//     while(a<=c)
//         printf("%c ",a++);
//     return 0;
// }
// method 2 with do ~ while loop
# include <stdio.h>
int main() {
    char c,a='a';
    scanf("%c",&c);
    do{
        printf("%c ",a++);
    }while(a<=c);
    return 0;
}
// method 3 with for loop
// # include <stdio.h>
// int main() {
//     char c,a='a';
//     scanf("%c",&c);
//     for(a;a<=c;a++)
//         printf("%c ",a);
//     return 0;
// }