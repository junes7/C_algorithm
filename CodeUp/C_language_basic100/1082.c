// 16���� ������?
// hexadecimal base Multiplication table 
// 16����(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F)�� ���
// ����(01)�̴� 16�������� ���ϴ� 16���� ������?�� ���ؼ� �ñ�������.
// A, B, C, D, E, F �� �ϳ��� �Էµ� ��, 1���� F���� ���� 16����
// �������� ������ ����غ���. (��, A ~ F ������ �Էµȴ�.)
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%X", &n);
    for(int i=1; i<=15; i++) {
        printf("%X*%X=%X\n", n, i, n*i);
    }
    return 0;
}