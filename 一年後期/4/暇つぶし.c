//文字を入力します
#include<stdio.h>
main () {

    char c;
    scanf("%c",&c);
    if(c == 'a') {printf("%cが入力されました\n",c);
    }else {
        printf("何かが入力されました\n");
        }
}
