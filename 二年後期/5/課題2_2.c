#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 3

typedef struct {
    int id;
    char name[30];
    int score;
} student;

void input(student *); //student型の構造体配列
void output(student *);
void func_avg(student *,int);
void func_max(student *,int);

int main() {
    student siken[N];
    input(siken); // 構造体のアドレスを渡す
    output(siken);
    func_max(siken,N);
    func_avg(siken,N);

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
void func_avg(student *p,int n) {
    int total = 0;
    for(int i = 0;i < n;i++) {
        total += p++->score;
    }
    printf("aberage:%f\n",(float)(total)/n);
};
void func_max(student *p,int n) {
    int max = 0; //最大値
    int* max_id = (int *)malloc(n*sizeof(int)); //最大値が複数個あった場合のためにそのidを保存する配列
    int max_index = 0; //idの個数
    for(int i = 0;i < n;i++) {
        if(p->score > max) { //現状の最大値を上回った場合
            max = p->score;  //最大値を更新
            max_id[0] = p->id; //max_idの最も左に代入
            max_index = 1;
        } else if(p->score == max) { //前回までにあった最大値と同じだった場合
            max_id[max_index] = p->id;
            max_index++;
        }
        p++;
    }
    printf("max:%d\n",max);
    for(int i = 0;i < max_index;i++) {
        printf("id:%d\n",max_id[i]); //idをすべて出力
     }
};
