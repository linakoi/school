#include <stdio.h>
#include <stdlib.h>
#include <time.h>
time_t time(time_t *t);

int main() {
    srand(time(NULL));//����Ⴄ�����𔭐������邽��
    int c;//a������̎�
    int p;//���Ƀ��[�U�̎�
    int win=0,lose=0,draw=0;//�����A�����B�������̉�
    printf("(��^��^c)<���Ƃ���񂯂�����܂��傤\n");
    printf("�����J�n�ł�!\n");
    char cm[3][6] = {"GU-","TYOKI","PA-"};

    for(;;) {
        printf("\n\n�O�[:0 �`���L:1 �p�[:2\n�����o���܂���:");
        scanf("%d",&p);

        c = rand();
        c %= 3;
        int flag = 1;//�����������L�^.����1,�������-1,����������0�ɂȂ�

        if(p > 3) {
            printf("�G���[�ł�\n");
            break;
        }

        printf("�����F%s\n����:%s\n",cm[p],cm[c]);
        if(p == c){
            flag = 0;
            printf("�������ł��I\n");
        }
        if(p == 0) {//�������O�[�̎�
            if(c == 1){//���肪�p�[
                printf("�����ł��I\n");
            } else if(c == 2) {//���肪�`���L
                printf("�����ł��I\n");
                flag *= -1;
            }
        }
        if(p == 1) {//�������`���L
            if(c == 2){//���肪�p�[
                printf("�����ł��I\n");
            } else if(c == 0) {//���肪�O�[
                printf("�����ł��I\n");
                flag *= -1;
            }
        }
        if(p == 2) {//�������p�[�̎�
            if(c == 0){//���肪�O�[
                printf("�����ł��I\n");
            } else if(c == 1) {//���肪�`���L
                printf("�����ł��I\n");
                flag *= -1;
            }
        }
        if(flag == 1) {//����񂯂�̌��ʂɂ����win�Ȃǂ����Z
            win++;
        } else if(flag == -1){
            lose++;
        } else {
            draw++;
        }
        printf("\n��������:%d ��������:%d �������̉�:%d\n",win,lose,draw);
        printf("Esc�ŏI�����܂�:");
        int cont = getch();
        if(cont==27){
            break;
        }
    }
}
