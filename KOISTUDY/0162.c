// 대소문자 변환하기
// convert uppercase to lowercase
# include <stdio.h>
int main() {
    int i;
    char ch[5];
    scanf("%s",ch);
    for(i=0;i<5;i++){
        if(ch[i]>='A'&&ch[i]<='Z')
            ch[i]+=32;
        else if(ch[i]>='a'&&ch[i]<='z')
            ch[i]-=32;
    }
    printf("%s",ch);
    return 0;
}