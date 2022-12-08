#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    int math;
    int english;
    int denki;
}data;

int main() {
     data siken[3] = {//構造体配列の初期化
        {101,"群馬 太郎",90,80,95},
        {102,"前橋 花子",90,95,85},
        {103,"高崎 哲郎",85,80,100}
    };
    for(int i = 0;i < 3;i++) {
            printf("id:%d name:%s math:%d english:%d dednki:%d\n",siken[i].id,siken[i].name,siken[i].math,siken[i].english,siken[i].denki);
    }
}
