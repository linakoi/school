#include <stdio.h>
main (){
    printf("文字列を入力してください:");
    char str[100];
    scanf("%s",str);
    printf("%sを受けとりました\n",str);
    int i = 0;
    for(;str[i] != '\0';i++) {
        printf("%d文字目\n",i+1);
    }
    printf("%d文字入力されました",i);
}
