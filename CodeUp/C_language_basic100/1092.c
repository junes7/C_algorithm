// �Բ� ���� Ǫ�� ��
// problem solving day
// ���� �� ���ÿ� ������ 3���� ������� �¶��� ä���ý��ۿ� ���� ������
// Ǫ�� ��¥�� �ſ� ��Ģ���̶�� �� ��, �ٽ� ��� �Բ� ������ Ǯ�� �Ǵ�
// �׳��� �����ϱ�? ���� ��� 3���� ���� �� ����/����ϰ�, ���� 3�ϸ���,
// 7�ϸ���, 9�ϸ��� �� ���� ���´ٸ�, ó�� �����ϰ� 63�� ���� �ٽ� 3����
// �Բ� ������ Ǯ�� �ȴ�.
// ���� �� ���ÿ� ������ �ο� 3���� ��Ģ������ �湮�ϴ�,
// �湮 �ֱⰡ ������ �ΰ� �Էµȴ�. (��, �Է°��� 100������ �ڿ����̴�.)
// 3���� �ٽ� ��� �Բ� �湮�� ������ Ǯ��� ��(���� ����/��� �� ��ĥ
// ��?)�� ����Ѵ�.
# include <stdio.h>

int main() {
    int a, b, c, day = 1;
    scanf("%d %d %d", &a, &b, &c);
    while (day % a !=0 || day % b != 0 || day % c !=0) {
        day++;
    }
    printf("%d", day);
    return 0;
}