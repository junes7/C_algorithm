// ��Ʈ������ XOR �Ͽ� ����ϱ�
// print the result of bitwise XOR
// �Էµ� ���� �� ���� ��Ʈ������ xor ������ �� �� ����� ������ ����غ���.
// ��Ʈ����(bitwise) ������ ^(xor, circumflex/caret, �����÷���/ī��)��
// ����ϸ� �ȴ�.
// 2���� ������ ������ �ΰ� �Էµȴ�. -2147483648 ~ +2147483647
// �� ������ ��Ʈ����(bitwise)�� xor ����� ������ ����� 10������ ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a ^b);
    return 0;
}