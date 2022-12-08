#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 3

typedef struct {
    int id;
    char name[30];
    int score;
} student;

void input(student *); //student�^�̍\���̔z��
void output(student *);
void func_avg(student *,int);
void func_max(student *,int);

int main() {
    student siken[N];
    input(siken); // �\���̂̃A�h���X��n��
    output(siken);
    func_max(siken,N);
    func_avg(siken,N);

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
void func_avg(student *p,int n) {
    int total = 0;
    for(int i = 0;i < n;i++) {
        total += p++->score;
    }
    printf("aberage:%f\n",(float)(total)/n);
};
void func_max(student *p,int n) {
    int max = 0; //�ő�l
    int* max_id = (int *)malloc(n*sizeof(int)); //�ő�l�������������ꍇ�̂��߂ɂ���id��ۑ�����z��
    int max_index = 0; //id�̌�
    for(int i = 0;i < n;i++) {
        if(p->score > max) { //����̍ő�l���������ꍇ
            max = p->score;  //�ő�l���X�V
            max_id[0] = p->id; //max_id�̍ł����ɑ��
            max_index = 1;
        } else if(p->score == max) { //�O��܂łɂ������ő�l�Ɠ����������ꍇ
            max_id[max_index] = p->id;
            max_index++;
        }
        p++;
    }
    printf("max:%d\n",max);
    for(int i = 0;i < max_index;i++) {
        printf("id:%d\n",max_id[i]); //id�����ׂďo��
     }
};
