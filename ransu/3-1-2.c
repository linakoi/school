#include <stdio.h>

int main () {
    int a,b,m,n;
    printf("a,b,m,nの順に入力：");
    scanf("%d %d %d %d",&a,&b,&m,&n);
    printf("実行します\n");
    int x[n+1];
    x[0] = b;
    printf("x[0]：%d\n",x[0]);
    for(int i = 1;i <= n;i++) {
        x[i] = (a*x[i-1])%m;
        printf("x[%d]：%d\n",i,x[i]);
    }
}
