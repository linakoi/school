#include<stdio.h>
#include <string.h>
#define N 4

typedef struct {
    int id;
    char name[30];
    int score;
} student;

void input(student *); //student型の構造体配列
void output(student *);
int main() {
    student siken[N];
    input(siken); // 構造体のアドレスを渡す
    output(siken);
    return 0;
}

void input(student *p) { //関数に構造体のアドレスを渡す
    for(int i = 0;i < N; i++) {
        scanf("%d",&(p->id)); // p->idはただの変数
        scanf("%s",p->name);
        scanf("%d",&(p->score));
        p++;
    }
}

void output(student *p) {
    for(int i=0;i < N;i++) {
        printf("id: %d  name:%15s score: %d\n",(p+i)->id, (p+i)->name,(p+i)->score); //ポインタへの加減算は構造体の大きさがかけられる
    }
}
