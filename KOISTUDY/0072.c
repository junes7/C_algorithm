// 0 입력될 때까지 무한 출력하기 2
// print infinite until input zero
// 정수가 순서대로 입력된다. -2147483648 ~ +2147483647, 단 개수는 알 수
// 없다. 0이 아니면 입력된 정수를 출력하고, 0이 입력되면 출력을 중단.
// method 1 with goto
// # include <stdio.h>
// int main() {
//     int n;
//     repeat:
//         scanf("%d",&n);
//         if(n!=0){
//             printf("%d\n",n);
//             goto repeat;
//         }
//     return 0;
// }
// method 2 with while loop
# include <stdio.h>
int main() {
    int n=1;
    while(n!=0){
        scanf("%d",&n);
        if(n!=0)
            printf("%d\n",n);
    }
    return 0;
}