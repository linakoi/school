#include <stdio.h>

typedef struct{
    int id;
    char name[30];
    int score;
}student;

int main() {
    student Taro = {1,"�Q�n�@���Y",90};
    student *p; //student�^�\���̃|�C���^
    p = &Taro; //�\���̂̃A�h���X����
    //�A���[���Z�q�ɂ��Q��
    printf("id:%d name:%s score:%d",p->id,p->name,p->score);
}
