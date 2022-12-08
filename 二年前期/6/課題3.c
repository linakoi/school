#include <stdio.h>
int func_r (int n) {
    if(n == 0) {
    return 1;
    }
    else {
        return n * func_r(n-1);
    }
}
int main() {
    printf("ŠKæ‚ğŒvZ‚µ‚Ü‚·.®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    int a;
    scanf("%d",&a);
    printf("%d",func_r(a));
}

