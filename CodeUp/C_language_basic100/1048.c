// �� ���� 2�� �ŵ����� ��� ����ϱ�
// print as a power of two in one time
// ���� 2��(a, b)�� �Է¹޾� a�� 2^b�� ���� ������ ����غ���.
// 0 <= a <= 10, 0 <= b <= 10
// ���� ��� 1 3 �� �ԷµǸ� 1�� 2^3(8)�� �Ͽ� ����Ѵ�.
// int a=1, b=10;
// printf("%d", a << b); //2^10 = 1024 �� ��µȴ�.
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a << b);
    return 0;
}