// ���� 2�� �Է¹޾� �� ����ϱ� 1
// print sum after input two integers
// ���� 2���� �Է¹޾� ���� ����ϴ� ���α׷��� �ۼ��غ���.(��,
// �ԷµǴ� ������ -1073741824 ~ 1073741824 �̴�.)
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0) {
        printf("%u", a+b);
    } else {
        printf("%d", a+b);
    }
    return 0;
}