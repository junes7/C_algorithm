// n명 학생 성적의 합계와 평균 구하기
// get sum and average of n student scores
// n명의 학생의 성적을 입력받아서 합계와 평균을 구하는 프로그램을 작성.
# include <stdio.h>
int main() {
    int i,n,d,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&d);
        s+=d;
    }
    printf("%d\n",s);
    printf("%.2f",(float)s/n);
}