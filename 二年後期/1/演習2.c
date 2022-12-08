#include <stdio.h>
#define N 5

int main() {
    int d[] = {4,3,2,1,0};
    int *pd;
    int **ppd;
    pd = d;
    ppd = &pd;
    for(int i= 0;i < N;i++) {
        printf("%d\n",**ppd);
        *pd++;
    }
}
