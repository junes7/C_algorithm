// ���� 1�� �Է¹޾� �� ������ ����ϱ�
// input one integer and print until the number
// ����(0 ~ 100) 1���� �Է¹޾� 0���� �� ������ ������� ����غ���.
// �Ϲ������� �ݺ� Ƚ���� ī��Ʈ�ϸ鼭 ���ϱ� ���� i ������ ���� ����Ѵ�.
// i : index, iterator ?
// ���� 1���� �Է�.(0 ~ 100) | 0���� �� ������ ���� �ٲ� �� ���� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++) {
        printf("%d\n", i);
    }
    return 0;
}