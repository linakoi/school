#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    int score;
} student;

void fuunc(student *);//�v���g�^�C�v�錾

int main() {
    student A = {1,"���Y",90};
    func(&A); //�\���̂̃A�h���X��n��
    printf("id:%d name:%s score:%d",A.id,A.name,A.score);
    return 0;
}

void func(student *p) {
    p->id = 2;
    strcpy(p->name,"�Ԏq");
    p->score = 85;
}
