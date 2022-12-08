#include <stdio.h>

int main() {
    int x,n,a;
    printf("x‚Ì’l:");
    scanf("%d",&x);
    printf("n‚Ì’l:");
    scanf("%d",&n);
    a = pw(x,n);
    printf("%d‚Ì%dæ:%d",x,n,a);
}

int pw(int x,int n) {
    int a = 1;
    for (int i = 0;i < n;i++) {
        a = a*x;
    }
    return a;
}
