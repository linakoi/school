#include <stdio.h>

typedef struct{
    int id;
    char name[30];
    int math;
    int english;
    int electric_circuit;
}seiseki;

int main() {
    //�\���̒�`�ŕ��ׂ����ɋL�q���Ă��� id,name,department,grade
    seiseki A = {101,"�Q�n�@���Y",90,80,95};
    seiseki B = {102,"�O���@�Ԏq",90,95,85};
    seiseki C = {103,"���� �N�Y",85,80,100};
    //�e�����o�ɂ�.�����ăA�N�Z�X
    printf("A id:%d\n",A.id);
    printf("B name:%s\n",B.name);
    printf("C electric circuit:%d\n",C.electric_circuit);
    return 0;
}
