// 참 거짓 바꾸기
// change true, false
// 1(true, 참) 또는 0(false, 거짓) 이 입력되었을 때 반대로 출력하는
// 프로그램을 작성해보자.
// 참, 거짓의 논리값(boolean value)인 불 값을 다루어주는 논리연산자는
// !(not), &&(and), ||(or) 이 있다.
# include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("%d",!a);
}