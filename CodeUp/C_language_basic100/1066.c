// ���� 3�� �Է¹޾� ¦/Ȧ ����ϱ�
// print even/odd number of three input integers
// �� ���� a, b, c�� �ԷµǾ��� ��, ¦(even)/Ȧ(odd)�� ����غ���.
// �� ���� a, b, c �� ������ �ΰ� �Էµȴ�.
// 0 <= a, b, c <= +2147483647
// �Էµ� ������� ¦(even)/Ȧ(odd)�� ���� �ٲ� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int d[3];
    for (int i=0; i<3; i++) {
        scanf("%d", &d[i]);
    }
    for (int i=0; i<3; i++) {
        if (d[i] % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}