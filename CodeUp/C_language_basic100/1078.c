// ¦�� �� ���ϱ�
// Get sum of even number
// ����(1 ~ 100) 1���� �Է¹޾� 1���� �� ������ ¦���� ���� ���غ���.
// ���� 1���� �Էµȴ�. (0 ~ 100)
// 1���� �Էµ� ������ ¦���� ���� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        if (i % 2 ==0) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}