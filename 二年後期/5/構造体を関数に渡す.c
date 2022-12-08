#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    char department;
    int grade;
}gakusei;

void func(gakusei);//プロトタイプ宣言

int main() {
    gakusei dareka = {22399,"群馬　太郎",'J',1};
    func(dareka); //構造体を関数に渡す
    return 0;

}

void func(gakusei data) { //構造体を受け取る関数 gakusei型のdataってこと？
    //渡された構造体各メンバにも.をつけてアクセス
    printf("id:%d",data.id);

}
