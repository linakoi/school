#include <stdio.h>

int main() {
    int x,n,a;
    printf("xの値:");
    scanf("%d",&x);
    printf("nの値:");
    scanf("%d",&n);
    a = pw(x,n);
    printf("%dの%d乗:%d",x,n,a);
}

int pw(int x,int n) {
    int a = 1;
    for (int i = 0;i < n;i++) {
        a = a*x;
    }
    return a;
}
