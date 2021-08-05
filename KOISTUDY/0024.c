// 정수 한 개 입력받아 나누어 출력하기
// print one input integer separately
// 다섯 자리의 정수 한 개를 입력받아 각 자리별로 나누어 출력한다.
# include <stdio.h>
int main() {
    int a1,a2,a3,a4,a5;
    scanf("%1d%1d%1d%1d%1d",&a1,&a2,&a3,&a4,&a5);
    printf("[%d]\n",a1*10000);
    printf("[%d]\n",a2*1000);
    printf("[%d]\n",a3*100);
    printf("[%d]\n",a4*10);
    printf("[%d]",a5);
    return 0;
}