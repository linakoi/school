#include <stdio.h>
#define N 5

int main () {
    int d[] = {4,3,2,1,0};
    int *pd;
    pd = d;
    for(int i = 0; i< N;i++) {
        printf("%d\n",*pd);
        pd += 1;
    }
    return 0;
}
