#include<stdio.h>

main () {
    int d[10] = {1,2,3,4,5,-1};
    int i = 0,sum = 0;
    while(d[i] >= 0) {
        sum += d[i++];
    }
    printf("%d",sum);
}

