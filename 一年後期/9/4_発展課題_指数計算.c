#include <stdio.h>

int main() {
    int x,n,a;
    printf("x�̒l:");
    scanf("%d",&x);
    printf("n�̒l:");
    scanf("%d",&n);
    a = pw(x,n);
    printf("%d��%d��:%d",x,n,a);
}

int pw(int x,int n) {
    int a = 1;
    for (int i = 0;i < n;i++) {
        a = a*x;
    }
    return a;
}
