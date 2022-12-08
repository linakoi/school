#include <stdio.h>
#include <string.h>
int main() {
    char s1[100];
    char s2[100];
    char s3[] = "abcd";
    int n,m;
    printf("s1‚ğ“ü—Í:");
    scanf("%s",s1);
    n = strlen(s1);
    printf("•¶š—ñ‚Ì’·‚³:%d\n",n);
    strcpy(s2,s1);
    printf("s1‚ğƒRƒs[ s2:%s\n",s2);
    m = strcmp(s1,s3);
    printf("”äŠr•¶š—ñ:%s",s3);
    if(m == 0) printf("\nˆê’v");
}
