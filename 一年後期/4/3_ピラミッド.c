#include <stdio.h>

main() {
    int i,j,n;
    n = 10;
    j = 0;
    for(i = 0;i < n;i++) {
        for(j = n-i;j <= n;j++) {

            printf("*");
        }
        printf("\n");
    }
}
