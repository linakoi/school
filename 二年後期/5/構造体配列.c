#include <stdio.h>

typedef struct {
    int id;
    int score;
    char name[30];
}data;

int main() {
    int i;
    data siken[3] = {//構造体配列の初期化
        {1,90,"太郎"},
        {2,50,"次郎"},
        {3,80,"三郎"}
    };
    for(i = 0;i < 3;i++) {
        printf("id:%d score:%d name:%s\n",siken[i].id,siken[i].score,siken[i].name);
    }
}
