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
    int chp = 10,php = 10,p,c;
    printf("(っ^ω^c)<私と対戦をしましょう\n");
    printf("(っ^v^c)<カウンター、打撃、魔法の三すくみです\n");
    printf("(っ^ω^c)<カウンターは打撃に強く、打撃は魔法に強く、魔法は打撃に強いです\n");
    printf("勝負開始です!\n\n");
    char cm[3][5] = {"反","打","魔"};
    for(int i = 0;i < 726;i++) {
        printf("\n相手HP%d\n",chp);
        printf("自分HP%d\n",php);
        printf("\nカウンター：0　打撃：1 魔法:2\nコマンド:");
        scanf("%d",&p);
        c = x[i]%3;

        int flag = 1;

        printf("自分：%s\n相手：%s\n",cm[p],cm[c]);
        if(p == c){
            printf("アイコです！\n");
            chp--;
            php--;
            printf("相手HP%d\n自分HP%d\n",chp,php);
        }
        if(c == 0) {//自分がカウンターの時
            if(p == 1){//相手は打撃
                printf("相手にダメージ！\n");
            } else {
                printf("自分にダメージ！\n");
                flag *= -1;
            }
        }
        if(c == 1) {//自分が打撃の時
            if(p == 2){//相手は
                printf("相手にダメージ！\n");
            } else {
                printf("自分にダメージ！\n");
                flag *= -1;
            }
        }
        if(c == 2) {
            if(p == 0){
                printf("相手にダメージ！\n");
            } else {
                printf("自分にダメージ！\n");
                flag *= -1;
            }
        }
        if(x[i]/4 == 0) {
            printf("クリティカルヒット！");
            flag*=2;
        }
        if(flag > 0) {
            chp += flag;
        } else {
            php += flag;
        }
    }
}
