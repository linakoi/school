#include <stdio.h>

typedef struct{
    int id;
    char name[30];
    int score;
}student;

int main() {
    student Taro = {1,"群馬　太郎",90};
    student *p; //student型構造体ポインタ
    p = &Taro; //構造体のアドレスを代入
    //アロー演算子による参照
    printf("id:%d name:%s score:%d",p->id,p->name,p->score);
}
