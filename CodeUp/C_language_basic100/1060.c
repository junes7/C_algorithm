// ��Ʈ������ AND �Ͽ� ����ϱ�
// print integer after do bitwise and
// �Էµ� ���� �� ���� ��Ʈ������ and ������ �� �� ����� ������
// ����غ���. ��Ʈ����(bitwise)������ &�� ����ϸ� �ȴ�.
// (and, ampersand, ���ۼ����� �д´�.)
// 2���� ������ ������ �ΰ� �Էµȴ�. -2147483648 ~ +2147483647
// �� ������ ��Ʈ����(bitwise)�� and ����� ������ ����� 10������ ���
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a & b);
    return 0;
}