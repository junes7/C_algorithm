// ��Ʈ������ OR �Ͽ� ����ϱ�
// print the result of bitwise OR
// �Էµ� ���� �� ���� ��Ʈ������ or ������ �� �� ����� ������ ����غ���.
// ��Ʈ����(bitwise) ������ |(or, vertical bar, ��Ƽ�ù�)�� ����ϸ� �ȴ�.
// 2���� ������ ������ �ΰ� �Էµȴ�. -2147483648 ~ +2147483647
// �� ������ ��Ʈ����(bitwise)�� or ����� ������ ����� 10������ ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a|b);
    return 0;
}