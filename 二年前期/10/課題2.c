#include <stdio.h>
#include <stdlib.h>
#define N 10

void mum(int d[],int *max,int *min) {
    for(int i = 0;d[i] > 0;i++){ //配列の要素の最後が-1だからそこまで判定
        if(*max < d[i]) { //*maxより大きかったら代入
            *max = d[i];
        }
        if(*min > d[i]) { //*minより小さかったら代入
            *min = d[i];
        }
    }
}

int main() {
    int d[N] = {0}; //全要素0で初期化
    for(int i = 0;i < N-1;i++) { //for文とrand関数で配列の要素を代入
         d[i] = rand()%100;
        printf("%d\n",d[i]); //すべて出力
    }
    d[N-1] = -1; //配列の最後に-1を代入
    printf("%d\n",d[N-1]);
    int max = -1;
    int min = 100; //maxとminを最小値、最大値で宣言
    mum(d,&max,&min); //関数呼び出し
    printf("\nmax:%d\nmin:%d",max,min);
}
