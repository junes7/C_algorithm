// �ú��� �Է¹޾� �и� ����ϱ�
// print minute after input hour/minute/second
// �ԷµǴ� ��:��:�� ���� �и� ����غ���.
// int h, m, s;
// scanf("%d:%d:%d", &h, &m, &s); �� �����ϸ� �ݷ��� ���̿� ��
// �������� �ԷµǾ�, h, m, s�� ���� �������� ����ȴ�.
// �� �� �ʰ� ��:��:�� �������� �Էµȴ�. | �и� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    printf("%d", m);
    return 0;
}