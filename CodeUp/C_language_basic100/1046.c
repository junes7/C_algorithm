// ���� 3�� �Է¹޾� �հ� ��� ����ϱ�
// print sum and average of three input integers
// ���� 3���� �Է¹޾� �հ� ����� ����غ���.
// ��, -2147483648 ~ +2147483647
// �հ� ����� ���� �ٲ� ����Ѵ�. ����� �Ҽ��� ���� ��° �ڸ�����
// �ݿø��ؼ� �Ҽ��� ���� ù° �ڸ����� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", a+b+c);
    printf("%.1lf", (a+b+c)/3.0);
    return 0;
}