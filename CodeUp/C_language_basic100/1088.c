// 3�� ����� ���?
// multiples of three pass? 
// 1���� �Է��� �������� 1�� �������� ����ϴ� ���α׷��� �ۼ��ϵ�,
// 3�� ����� ���� ������� �ʵ��� ������.
// ���� ���, 1 2 4 5 7 8 10 11 13 14 ...�� ���� ����ϴ� ���̴�.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        if (i % 3 == 0)
            continue;
        printf("%d ", i);
    }
    return 0;
}