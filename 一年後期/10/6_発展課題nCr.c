#include <stdio.h>
main() {
    int n,r,A;
    printf("nからrをとるパターン:");
    scanf("%d %d",&n,&r);
    A = nCr(n,r);
    printf("%d通りです",A);
}

int nCr(int n,int r) {
    int re = 0;
    int Anr = 1,Ar = 1,An =1;
    int nr = n-r;
    for(;0 < nr;nr--) {
        Anr*=nr;
    }
    for(;0 < r;r--) {
        Ar*=r;
    }
    for(;0 < n;n--) {
        An*=n;
    }
    return An/Ar/Anr;
}
