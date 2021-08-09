// 정수 한 개 입력받아 카운트다운 출력하기 1
// print countdown from one integer
// 정수(1 ~ 100) 한 개가 입력되었을 때 카운트다운을 출력해보자.
// method 1 with for loop
// # include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=n;i>0;i--){
//         printf("%d\n",i);
//     }
//     return 0;
// }
// method 2 with while loop
# include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    while(n>0){
        printf("%d\n",n--);
    }
    return 0;
}