#include <stdio.h>

typedef struct {
    int id;
    int score;
    char name[30];
}data;

int main() {
    int i;
    data siken[3] = {//�\���̔z��̏�����
        {1,90,"���Y"},
        {2,50,"���Y"},
        {3,80,"�O�Y"}
    };
    for(i = 0;i < 3;i++) {
        printf("id:%d score:%d name:%s\n",siken[i].id,siken[i].score,siken[i].name);
    }
}
