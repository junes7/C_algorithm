// �� �Է¹޾� ���� ����ϱ�
// print season after input month
// ���� �Էµ� �� ���� �̸��� ��µǵ��� �غ���.
// �� : ���� �̸�
// 12, 1, 2 : winter
//   3, 4, 5 : spring
//   6, 7, 8 : summer
//   9, 10, 11 : fall
// ���� �ǹ��ϴ� 1���� ������ �Էµȴ�.(1 ~ 12)
// ���� �̸��� ����Ѵ�.
// use switch case statement
// method 1
# include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    switch (m)
    {
        case 12:
        case 1:
        case 2:
            printf("winter");
            break;
        case 3:
        case 4:
        case 5:
            printf("spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer");
            break;
        case 9:
        case 10:
        case 11:
            printf("fall");
    }
    return 0;
}