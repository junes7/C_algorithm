// ���� 1�� �Է¹޾� ���� ���� ����ϱ�
// printf next character after input one character
// ������ 1���� �Է¹޾� �� ���� ���ڸ� ����غ���.
// ������ 'A'�� ���� ���ڴ� 'B'�̰�, ������ '0'�� ���� ���ڴ� '1'�̴�.
// ���ڴ� ���� ǥ���ϴ� ���ڷμ� '0' �� ���� �� ��ü�� �ǹ��ϰ�,
// 0�� ���� �ǹ��Ѵ�.
// method 1
# include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    printf("%c", c+1);
    return 0;
}