//小文字→大文字
#include <stdio.h>
main () {
    char c,ct;
    scanf("%c",&c);
    ct = c-32;

    printf("文字:%c 16進数:%x 10進数:%d\n",c,c,c);
    printf("大文字に変換→文字:%c 16進数:%x 10進数:%d\n",ct,ct,ct);
}
