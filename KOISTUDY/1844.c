// 함수로 ** 출력하기
// print ** through function
// ** 을 출력하시오. 단, 함수형 문제이므로 함수 f()만 작성하시오.
# include <stdio.h>
void f();
// // method 1
// void f(){
//     printf("%s","**");
//     return;
// }
// method 2
void f(){
    for(int i=1;i<=2;i++){
        printf("%c",'*');
    }
    return;
}
int main() {
    f();
    return 0;
}