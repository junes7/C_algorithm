// ���� 3�� �Է¹޾� ¦���� ����ϱ�
// print even number of three input integers
// �� ���� a, b, c �� ������ �ΰ� �Էµȴ�.
// 0 ~ +2147483647 ������ �������� �ԷµǸ� ��� 1���� ¦���̴�.
// ¦���� ������� ���� �ٲ� ����Ѵ�.
// method 1
// # include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a % 2 == 0) {
//         printf("%d\n", a);
//     }
//     if (b % 2 == 0) {
//         printf("%d\n", b);
//     }
//     if (c % 2 == 0) {
//         printf("%d", c);
//     }
//     return 0;
// }
// method 2
# include <stdio.h>

int main() {
    int d[3];
    scanf("%d %d %d", &d[0], &d[1], &d[2]);
    for (int i=0; i<3; i++) {
        if (d[i] % 2 == 0) {
            printf("%d\n", d[i]);
        }
    }
    return 0;
}