// ���� 1�� �Է¹޾� ī��Ʈ�ٿ� ����ϱ� 1
// print countdown of one input integer
// ����(1 ~ 100) 1���� �ԷµǾ��� �� ī��Ʈ�ٿ��� ����غ���.
// ���� 1���� �Էµȴ�.(1 ~ 100)
// 1�� ���̸鼭 �� �ٿ� �ϳ��� 1�� �� ������ ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n!=0) {
        printf("%d\n", n);
        n -= 1;
    }
    return 0;
}