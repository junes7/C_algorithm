// 정수 1개 입력받아 2배 곱해 출력하기
// print one integer multiplied by two
// 정수 1개를 입력받아 2배 곱해 출력해보자.
// *2의 값을 출력해도 되지만, 정수를 2배로 곱하거나 나누어 계산해 주는
// 비트단위시프트연산자 <<, >>를 이용한다.
// 2진수 형태로 저장되어 있는 값들을 왼쪽(<<)이나 오른쪽(>>)으로
// 지정한 비트 수만큼 밀어주면 2배씩 늘어나거나 반으로 줄어드는데,
// 왼쪽 비트시프트(<<)가 될 때에는 오른쪽에 0이 주어진 개수만큼 추가,
// 오른쪽 비트시프트(>>)가 될 때에는 왼쪽에 0(0 또는 양의 정수인 경우)
// 이나 1(음의 정수인 경우)이 개수만큼 추가된다.
// 범위(32비트)를 넘어서 이동되는 비트는 삭제된다.
// int a=10;
// printf("%d", a<<1); //10을 2배 한 값인 20 이 출력된다.
// 정수 한 개가 입력된다. 단, -1073741824 ~ +1073741823
// 2배 곱한 정수를 출력한다.
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n<<1);
    return 0;
}