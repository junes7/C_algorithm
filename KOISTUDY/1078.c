// 자릿수 세기
// count digit
// 자연수 n이 입력될 때, n의 자리수를 출력하는 프로그램을 작성하시오.
// (반복문 불가, 반드시 재귀함수로 작성하시오.)
# include <stdio.h>
int cdigit(int n,int c) {
    if(n==0)
        return c;
    else{
        return cdigit(n/10,c+1);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",cdigit(n,0));
    return 0;
}