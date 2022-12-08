#include<stdio.h>

int main() {
    int n = 10;
    int *pn;
    int **ppn;
    pn = &n;
    ppn = &pn;
    printf("n:%d pn:%p ppn:%p\n",n,pn,ppn);
    printf("*pn:%d *ppn:%p **ppn:%d\n",*pn,*ppn,**ppn);
    printf("\n&ppn:%p",&ppn);

}
