// 함수로 true(1)/false(0) 리턴하기
// return true/false through function
// 정수 1개를 입력 받아 0 인 경우 zero, 0 이 아닌 경우 non zero를
// 판별하여 출력하시오. 단, 함수형 문제이므로 함수 zero()만 작성.
# include <stdio.h>
# include <stdbool.h>
int n;
bool zero(int);
bool zero(int k){
    return !k;
}
int main() {
    scanf("%d",&n);
    if(zero(n))
        printf("zero\n");
    else
        printf("non zero\n");
}