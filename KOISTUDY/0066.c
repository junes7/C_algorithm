// 정수 한 개 입력받아 분석하기
// Analyze one input integer
// 정수 한 개가 입력되었을 때, 음(minus)/양(plus)과 짝(even)/홀(odd)을
// 출력해보자.
# include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("minus\n");
        if(a%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }else{
        printf("plus\n");
        if(a%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}