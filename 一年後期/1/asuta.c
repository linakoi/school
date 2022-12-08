#include <stdio.h>

int main() {
    int i,j,n;
    n =10;
    for(j = 0;j < n;j++) {
        for(i = 0;i < n;i ++) {
            if(i < j) {
                    printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");
}
