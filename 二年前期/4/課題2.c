#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));//毎回違う乱数を発生させるため
    int a = rand();//aが答え
    int b;//ｂにユーザの入力した値を代入する
    int cont; //Escを代入する
    int flag = 0;//Escで終了した時１にする
    printf("数あてゲームです\n数字を入力してください:");
    do{
        scanf("%d",&b);
        if(a > b){
            printf("もっと大きいです\n");
        } else if(a < b) {
            printf("もっと小さいです\n");
        }
        printf("Escで終了します:");
        cont = getch();
        if(cont==27){
            flag = 1;//これが１なら終了しますと出力し終わる
            break;
        }
    }while(a != b);//a==bとなるまで続ける
    if(flag == 1) {
        printf("\n終了します");
    }else{
        printf("正解です！\n");
    }
}
