#include <stdio.h>

int main() {
    char str1[] = "abcde";
    printf("str1のアドレス:%p 文字列のアドレス:%p\n 内容 :%s\n",&str1,str1,str1);

    char *str2 = "abcde";
    printf("str2のアドレス:%p 文字列のアドレス:%p\n 内容 :%s\n",&str2,str2,str2);
}
