// ���� 2�� �Է¹޾� �ڵ� ����ϱ�
// calcualte two input integers automatically
// ���� 2��(a, b)�� �Է¹޾� ��, ��, ��, ��, ������, ���� ����
// �ڵ����� ����غ���. �� 0 <= a, b <= 2147483647, b�� 0�� �ƴϴ�.
// ù �ٿ� ��, ��° �ٿ� ��, ��° �ٿ� ��, ��° �ٿ� ��,
// �ټ�° �ٿ� ������, ����° �ٿ� ���� ���� ������� ����Ѵ�.
// (�Ǽ�, �Ҽ��� ���� ��° �ڸ����� �ݿø��� ��° �ڸ����� ���)
// method 1
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%u\n", a+b);
    printf("%d\n", a-b);
    printf("%u\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    printf("%.2f", (float)a/b);
    return 0;
}