// 정수 1개 입력받아 그대로 출력하기 1
// print one integer with original format
// 정수 1개를 입력받아 그대로 출력해보자.(단, 입력되는 정수의 범위는
// 0 ~ 4,294,967,295 이다.)
// -2147483648~+2147483647 범위의 정수를 저장하고 처리하기 위해서는
// int 형으로 변수를 선언하면 된다.(int 로 선언하고 %d로 받고 출력)
// 하지만 이 범위를 넘어가는 정수를 저장하기 위해서는 보다 큰 범위를
// 저장할 수 있는 다른 데이터형을 사용해야 정상적으로 저장할 수 있다.
// unsigned int 데이터형을 사용하면 0 ~ 4294967295 범위의 정수를
// 저장할 수 있다.
// unsigned int n;
// scanf("%u", &n);
// printf("%u", n);
# include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);
    printf("%u", n);
    return 0;
}