#include <stdio.h>

main() {
    int a[10];
    a[0] = 5;
    for(int k = 1;k < 10 ;k++) {
        a[k] = (2 * a[k-1]) + (4 * k);
    }
    for(int i = 0;i < 10;i++) {
        printf("a%dF%d\n",i+1,a[i]);
    }
}
