#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    char department;
    int grade;
}gakusei;

void func(gakusei);//�v���g�^�C�v�錾

int main() {
    gakusei dareka = {22399,"�Q�n�@���Y",'J',1};
    func(dareka); //�\���̂��֐��ɓn��
    return 0;

}

void func(gakusei data) { //�\���̂��󂯎��֐� gakusei�^��data���Ă��ƁH
    //�n���ꂽ�\���̊e�����o�ɂ�.�����ăA�N�Z�X
    printf("id:%d",data.id);

}
