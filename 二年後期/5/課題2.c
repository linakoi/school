#include<stdio.h>
#include <string.h>
#define N 4

typedef struct {
    int id;
    char name[30];
    int score;
} student;

void input(student *); //student�^�̍\���̔z��
void output(student *);
int main() {
    student siken[N];
    input(siken); // �\���̂̃A�h���X��n��
    output(siken);
    return 0;
}

void input(student *p) { //�֐��ɍ\���̂̃A�h���X��n��
    for(int i = 0;i < N; i++) {
        scanf("%d",&(p->id)); // p->id�͂����̕ϐ�
        scanf("%s",p->name);
        scanf("%d",&(p->score));
        p++;
    }
}

void output(student *p) {
    for(int i=0;i < N;i++) {
        printf("id: %d  name:%15s score: %d\n",(p+i)->id, (p+i)->name,(p+i)->score); //�|�C���^�ւ̉����Z�͍\���̂̑傫������������
    }
}
