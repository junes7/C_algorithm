// ���� 1�� �Է¹޾� ī��Ʈ�ٿ� ����ϱ� 2
// print countdown of one input integer
// ����(1 ~ 100) 1���� �ԷµǾ��� �� ī��Ʈ�ٿ��� ����غ���.
// ���� 1���� �Էµȴ�. (1 ~ 100)
// 1�� ���̸鼭 �� �ٿ� �ϳ��� 0�� �� ������ ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n!=0) {
        n -= 1;
        printf("%d\n", n);
    }
    return 0;
}