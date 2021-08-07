// 비트단위로 and 하여 출력하기
// print the result of bitwise and
// ** 비트단위(bitwise)연산자는, ~(bitwise not), &(bitwise and),
// |(bitwise or), ^(bitwise xor), <<(bitwise left shift),
// >>(bitwise right shift) 가 있다.
# include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a&b);
    return 0;
}