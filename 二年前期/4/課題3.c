#include <stdio.h>
#include <stdlib.h>
#include <time.h>
time_t time(time_t *t);

int main() {
    srand(time(NULL));//毎回違う乱数を発生させるため
    int c;//aが相手の手
    int p;//ｂにユーザの手
    int win=0,lose=0,draw=0;//勝ち、負け。あいこの回数
    printf("(っ^ω^c)<私とじゃんけんをしましょう\n");
    printf("勝負開始です!\n");
    char cm[3][6] = {"GU-","TYOKI","PA-"};

    for(;;) {
        printf("\n\nグー:0 チョキ:1 パー:2\n何を出しますか:");
        scanf("%d",&p);

        c = rand();
        c %= 3;
        int flag = 1;//勝ち負けを記録.勝つと1,負けると-1,あいこだと0になる

        if(p > 3) {
            printf("エラーです\n");
            break;
        }

        printf("自分：%s\n相手:%s\n",cm[p],cm[c]);
        if(p == c){
            flag = 0;
            printf("あいこです！\n");
        }
        if(p == 0) {//自分がグーの時
            if(c == 1){//相手がパー
                printf("勝ちです！\n");
            } else if(c == 2) {//相手がチョキ
                printf("負けです！\n");
                flag *= -1;
            }
        }
        if(p == 1) {//自分がチョキ
            if(c == 2){//相手がパー
                printf("勝ちです！\n");
            } else if(c == 0) {//相手がグー
                printf("負けです！\n");
                flag *= -1;
            }
        }
        if(p == 2) {//自分がパーの時
            if(c == 0){//相手がグー
                printf("勝ちです！\n");
            } else if(c == 1) {//相手がチョキ
                printf("負けです！\n");
                flag *= -1;
            }
        }
        if(flag == 1) {//じゃんけんの結果によってwinなどを加算
            win++;
        } else if(flag == -1){
            lose++;
        } else {
            draw++;
        }
        printf("\n勝った回数:%d 負けた回数:%d あいこの回数:%d\n",win,lose,draw);
        printf("Escで終了します:");
        int cont = getch();
        if(cont==27){
            break;
        }
    }
}
