//数当てゲーム　time関数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int ans,n;
    char yes;
    srand((unsigned int )time(NULL)); //乱数の種に現在時刻を利用
    ans = rand()%100;//乱数を100で割ったあまり
    printf("数当てゲーム：0～100の整数を当ててみよう！\n");
    while(1){
        scanf("%d",&n);
        if(ans == n) {
            break;
        } else if(ans > n) {
        printf("もっと大きいお^ω^\n");
        }else {
        printf("もっと小さいお^ω^\n");
        }
    }
    printf("正解！\nも一回やる^ω^？[Y/n]:");
    scanf(" %c",&yes);
    if(yes == 'y' || yes == 'Y') {
        main();
    }else {
    printf("おわるお^ω^");
    }
}
