// ���� 1�� �Է¹޾� �� ����ϱ�
// print evaluation of one input integer
// ����(����, 0 ~ 100)�� �Է¹޾� �򰡸� ����غ���.
// �� ����
// ���� ���� : ��
// 90 ~ 100 : A
// 70 ~   89 : B
// 40 ~   69 : C
//  0 ~   39 : D�� �򰡵Ǿ�� �Ѵ�.
// ����(0 ~ 100) 1���� �Էµȴ�. | �� ����� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);
    if (s >= 90 && s <= 100) {
        printf("A");
    } 
    else if (s >= 70 && s <= 89) {
        printf("B");
    }
    else if (s >= 40 && s <= 69) {
        printf("C");
    }
    else {
        printf("D");
    }
    return 0;
}