#include <stdio.h>
#include <string.h>
int main() {
    char s1[100];
    char s2[100];
    char s3[] = "abcd";
    int n,m;
    printf("s1�����:");
    scanf("%s",s1);
    n = strlen(s1);
    printf("������̒���:%d\n",n);
    strcpy(s2,s1);
    printf("s1���R�s�[ s2:%s\n",s2);
    m = strcmp(s1,s3);
    printf("��r������:%s",s3);
    if(m == 0) printf("\n��v");
}
