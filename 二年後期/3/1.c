#include <stdio.h>

int main() {
    char str1[] = "abcde";
    printf("str1�̃A�h���X:%p ������̃A�h���X:%p\n ���e :%s\n",&str1,str1,str1);

    char *str2 = "abcde";
    printf("str2�̃A�h���X:%p ������̃A�h���X:%p\n ���e :%s\n",&str2,str2,str2);
}
