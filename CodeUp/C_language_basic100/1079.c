// ���ϴ� ���ڰ� �Էµ� ������ �ݺ� ����ϱ�
// print repeatedly until wanted character is entered
// 'q'�� �Էµ� ������ �Է��� ���ڸ� ��� ����ϴ� ���α׷��� �ۼ��غ���.
// do while�� Ǯ ��
// ���ڵ��� 1���� ����ؼ� �Էµȴ�.
// 'q'�� �Էµ� ������ �Էµ� ���ڸ� ���� �ٲ� �� �پ� ����Ѵ�.
// method 1
# include <stdio.h>

int main() {
    char c;
    do {
        scanf("%c ", &c); 
        printf("%c\n", c);
    } while (c!='q');
    return 0;
}