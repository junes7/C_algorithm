// 세 정수의 평균 구하기
// get average of three intgers
// 세 정수 n1, n2, n3를 입력받아서 세 정수의 평균값을 구하여 출력하시오.
# include <stdio.h>
int main() {
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("%.3f",(float)(n1+n2+n3)/3);
    return 0;
}