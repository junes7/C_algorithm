// ���� 3�� �Է¹޾� ���� ���� �� ����ϱ�
// print smallest number of three input integers
// �Էµ� �� ���� a, b, c �� ���� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.
// ��, ���ǹ��� ������� �ʰ� 3�� ������ ? �� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a<b ? a:b)<c ? (a<b ? a:b):c);
    return 0;
}