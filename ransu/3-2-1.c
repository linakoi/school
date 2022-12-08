#include <stdio.h>

int main () {
    int a,b,m,n;
    printf("a,b,mの順に入力してください\n");
    printf("ヒント:666,123,727を入力すると周期725の配列ができます：");
    scanf("%d %d %d",&a,&b,&m);
    printf("実行します\n");

    n = 10000;

    int x[n];
    x[0] = b;

    printf("x[0]：%d\n",x[0]);

    for(int i = 1;i <= n;i++) {
        x[i] = (a*x[i-1])%m;
        printf("x[%d]：%d\n",i,x[i]);
        if(b == x[i]){
            n = i-1;
            printf("nの値は%dです",n);
            break;
        }
    }
}
