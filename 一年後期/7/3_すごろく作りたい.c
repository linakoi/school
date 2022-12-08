//数当てゲーム　time関数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int sai;
    char 1p,2p;
    srand((unsigned int )time(NULL)); //乱数の種に現在時刻を利用
    ans = rand()%100;//乱数を100で割ったあまり
    printf("数当てゲーム：0～100の整数を当ててみよう！\n");
    while(1){
        pritf("1でサイコロを振ります:");
        scanf("%c"&1p)
    }
    printf("正解！\nも一回やる^ω^？[Y/n]:");
    scanf(" %c",&yes);
    if(yes == 'y' || yes == 'Y') {
        main();
    }else {
    printf("おわるお^ω^");
    }
}
