// 정수 세 개 입력받아 짝수만 출력하기
// print even number of three integers
# include <stdio.h>
int main() {
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for(int i=0;i<3;i++){
        if(a[i]%2==0)
            printf("%d\n",a[i]);
    }
    return 0;
}