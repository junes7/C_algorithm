// �� �Է¹޾� �ٸ��� ����ϱ�
// take the evaluation character and print it differently
// �򰡸� ����(A, B, C, D, ...)�� �Է¹޾� ������ �ٸ��� ����غ���.
// �� ����
// �� : ����
// A : best!!!
// B : good!!
// C : run!
// D : slowly~
// ������ ���ڵ� : what?
// ������ 1���� �Էµȴ�. (A, B, C, D ���� �� ���ڰ� �Էµȴ�.)
// �򰡳��뿡 ���� �ٸ� ������ ��µȴ�.
// switch case statement ����� ��!
// method 1
# include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    switch (c) {
        case 'A':
            printf("best!!!");
            break;
        case 'B':
            printf("good!!");
            break;
        case 'C':
            printf("run!");
            break;
        case 'D':
            printf("slowly~");
            break;
        default:
            printf("what?");
    }
    return 0;
}