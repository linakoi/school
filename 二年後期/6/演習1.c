#include <stdio.h>
#include <string.h>

#define N 4

typedef struct {
    int id;
    char name[30];int score;
}student;

void func(student *);

int main() {
    student siken[N];
    func(siken); //�\���̂̃A�h���X��n��
    for(int i = 0;i < N;i++) {
        printf("id:%d name:%15s score:%d\n",siken[i].id,siken[i].name,siken[i].score);
    }
    return 0;
}

void func (student *p) {
    char *str[N] = {"�O��","����","�ɐ���","���c"};
    for(int i = 0; i < N;i++) {
    scanf("%d",p->id);
    scanf(" %s",p->name);
    scanf("%d",p->score);
    p++;
    }
}

void input(student *p) {
}
