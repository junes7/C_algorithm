// 삼각형 넓이 구하기
// find the area of a triangle
// 삼각형의 밑변의 길이 u와 높이 h를 입력받아 삼각형의 넓이를 구하시오.
# include <stdio.h>
int main() {
    int u,h;
    scanf("%d %d",&u,&h);
    printf("%g",(double)u*h/2);
    return 0;
}