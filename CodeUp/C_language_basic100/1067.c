// ���� 1�� �Է¹޾� �м��ϱ�
// analyze one input integer
// ���� 1���� �ԷµǾ��� ��, ��(minus)/��(plus)�� ¦(even)/Ȧ(odd)�� ���.
// ����/���� ���� ������ �ȿ� ����/���� ���� ������ �ٽ� "��ø"�� �� �ִ�.
// ���� 1���� �Էµȴ�. -2147483648 ~ +2147483647, �� 0�� �Էµ��� �ʴ´�.
// �Էµ� ������ ���� ù �ٿ� minus�� plus�� ���,
// �� ��° �ٿ� odd �� even �� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("minus\n");
        if (n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    } else {
        printf("plus\n");
        if (n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}