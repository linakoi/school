#include <stdio.h>

typedef struct{
    int id;
    char name[30];
    char department;
    int grade;
} gakusei;

int main() {
    //�\���̒�`�ŕ��ׂ����ɋL�q���Ă��� id,name,department,grade
    gakusei dareka = {22222,"�t�~�����",'J',2};
    //�e�����o�ɂ�.�����ăA�N�Z�X
    printf("id:%d",dareka.id);
    return 0;
}
