#include <stdio.h>

int diamond (int a, int b) {
    return a*b/2;
}

int  main(){
    int a,b;
    printf("•HŒ`‚Ì–ÊÏ‚ğŒvZ‚µ‚Ü‚·.c‚Æ‰¡‚Ì’·‚³‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d %d",&a,&b);
    int answer = diamond(a,b);
    printf("%d",answer);
}
