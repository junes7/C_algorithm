// �������! ���� �׸�~
// so far! now stop~
// 1, 2, 3 ... �� ������� ��� ���س��� ��,
// �� ���� �Է��� �������� ���� ���ȸ� ��� ���ϴ� ���α׷��� �ۼ��غ���.
// ��, 1���� n���� ������ ��� ���Ѵٰ� �� ��,
// ������ ���ؾ� �Է��� ������ ���ų� Ŀ������ �˾ƺ����� �ϴ� �����̴�.
// ������, �̹����� �� ���� ���� ����ؾ� �Ѵ�. 57�� �Է��ϸ�
// 1+2+3+...+8+9+10=55�� �ٽ� 11�� ���� 66�� �� ��, �� ���� ����ؾ� �Ѵ�.
// method 1
# include <stdio.h>

int main() {
    int n, s=0;
    scanf("%d", &n);
    for(int i=1; ;i++) {
        s += i;
        if(s>=n)
            break;
    }
    printf("%d", s);
    return 0;
}