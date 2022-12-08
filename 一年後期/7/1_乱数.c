#include <stdio.h>
#include <stdlib.h>

int main() {
    int sai ,n;
    srand(10);
    printf("サイコロ:0を入力すると終了　他の文字：サイコロを振る");
    while(1) { //無限ループ
        scanf("%d",&n);
        if(n == 0) break;
        printf("サイコロの数字:%d\n",rand()%6+1); //乱数を６で割ったあまり＋１
    }
}
