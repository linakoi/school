#include <stdio.h>

int main () {
    int a = 666,b = 123,m = 727,n =726;

    int x[n];
    x[0] = b;

    for(int i = 1;i <= n;i++) {
        x[i] = (a*x[i-1])%m;
        if(b == x[i]){
            n = i-1;
            break;
        }
    }
    printf("さいころを振ります.０で終了、それ以外の数字で実行します\n");
    int hand;
    scanf("%d",&hand);
    for(int i = 0;i < 726;i++){
        if(hand){
            printf("---------\n");
            printf("|      |\n|      |\n|   ");
            printf("%d  |\n",(x[i]%6) + 1);
            printf("|      |\n|      |\n");
            printf("---------\n");
            printf("つづけますか？1or0\n");
            scanf("%d",&hand);
        }
    }
}
