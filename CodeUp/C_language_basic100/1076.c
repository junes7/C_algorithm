// ���� 1�� �Է¹޾� ���ĺ� ����ϱ�
// print alphabet until one input character
// ������(a ~ z) 1���� �ԷµǾ��� �� �� ���ڱ����� ���ĺ��� ������� ���.
// ������ 1���� �Էµȴ�. (a ~ z)
// a���� �Է��� ���ڱ��� ������� ������ �ΰ� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    char c, t = 'a';
    scanf("%c", &c);
    do {
        printf("%c ", t++);
    } while (t <= c);
    return 0;
}