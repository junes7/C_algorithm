// �ֹι�ȣ �Է¹޾� ���� �ٲ� ����ϱ�
// print with change the format after input social security number
// �ֹι�ȣ�� ������ ���� �����ȴ�. xxxxxx-xxxxxxx
// ���� 6�ڸ��� �������(yymmdd)�̰� �� 7�ڸ��� ����, ����, ���������ڵ��̴�.
// �ֹι�ȣ�� �Է¹޾� ���¸� �ٲ� ����غ���.
// �ֹι�ȣ �� 6�ڸ��� �� 7�ڸ��� '-'�� ���еǾ� �Էµȴ�.(�Է°��� ������
// �ֹι�ȣ�̴�.) | '-'�� ������ �ֹι�ȣ 13�ڸ��� ��� �ٿ� ����Ѵ�.
# include <stdio.h>

int main() {
    int ssn1, ssn2;
    scanf("%d-%d", &ssn1, &ssn2);
    printf("%06d%07d", ssn1, ssn2);
    return 0;
}