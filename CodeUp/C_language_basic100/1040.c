// ���� 1�� �Է¹޾� ��ȣ �ٲ� ����ϱ�
// print one integer with changing the sign
// �Էµ� ������ ��ȣ�� �ٲ� ����غ���. ��, -2147483647
// ~+2147483647 ������ ������ �Էµȴ�. ���� �������� -(negative)��
// ���� �տ� ���̸� ��ȣ�� �ݴ�� �ٲ�� ���ȴ�.
// int a;
// scanf("%d", &a);
// printf("%d", -a);
// ���� 1���� �Էµȴ�. | ��ȣ�� �ٲ� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", -a);
    return 0;
}