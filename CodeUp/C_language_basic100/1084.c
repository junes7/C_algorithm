// �� ���� �� �����
// create color with mixing light
// ����(red), �ʷ�(green), �Ķ�(blue) ���� ���� ���� ���� ���� ���� �����
// ������ �Ѵ�. ����(r), �ʷ�(g), �Ķ�(b) ������ ���� ������ �־��� ��,
// (���� ���࿡ ���� 0 ~ n-1 ���� n������ �� ������ ���� �� �ִ�.)
// �־��� rgb ������ �ٸ��� ���� ���� �� �ִ� ��� ����� ����(r g b)��
// �� ���� ���� ����غ���.
// method 1
# include <stdio.h>

int main() {
    int r, g, b, cnt=0;
    scanf("%d %d %d", &r, &g, &b);
    for(int i=0; i<r; i++) {
        for(int j=0; j<g; j++) {
            for(int k=0; k<b; k++) {
                printf("%d %d %d\n", i, j, k);
                cnt += 1;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}