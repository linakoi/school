#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    int score;
} student;

void fuunc(student *);//プロトタイプ宣言

int main() {
    student A = {1,"太郎",90};
    func(&A); //構造体のアドレスを渡す
    printf("id:%d name:%s score:%d",A.id,A.name,A.score);
    return 0;
}

void func(student *p) {
    p->id = 2;
    strcpy(p->name,"花子");
    p->score = 85;
}
