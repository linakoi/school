#include <stdio.h>

int main () {
    int a = 666,b = 123,m = 727,n =726;

    int x[n];
    x[0] = b;

    for(int i = 1;i <= n;i++) {
        x[i] = (a*x[i-1])%m;
        if(b == x[i]){
            n = i-1;
            break;
        }
    }
    int chp = 10,php = 10,p,c;
    printf("(��^��^c)<���Ƒΐ�����܂��傤\n");
    printf("(��^v^c)<�J�E���^�[�A�Ō��A���@�̎O�����݂ł�\n");
    printf("(��^��^c)<�J�E���^�[�͑Ō��ɋ����A�Ō��͖��@�ɋ����A���@�͑Ō��ɋ����ł�\n");
    printf("�����J�n�ł�!\n\n");
    char cm[3][5] = {"��","��","��"};
    for(int i = 0;i < 726;i++) {
        printf("\n����HP%d\n",chp);
        printf("����HP%d\n",php);
        printf("\n�J�E���^�[�F0�@�Ō��F1 ���@:2\n�R�}���h:");
        scanf("%d",&p);
        c = x[i]%3;

        int flag = 1;

        printf("�����F%s\n����F%s\n",cm[p],cm[c]);
        if(p == c){
            printf("�A�C�R�ł��I\n");
            chp--;
            php--;
            printf("����HP%d\n����HP%d\n",chp,php);
        }
        if(c == 0) {//�������J�E���^�[�̎�
            if(p == 1){//����͑Ō�
                printf("����Ƀ_���[�W�I\n");
            } else {
                printf("�����Ƀ_���[�W�I\n");
                flag *= -1;
            }
        }
        if(c == 1) {//�������Ō��̎�
            if(p == 2){//�����
                printf("����Ƀ_���[�W�I\n");
            } else {
                printf("�����Ƀ_���[�W�I\n");
                flag *= -1;
            }
        }
        if(c == 2) {
            if(p == 0){
                printf("����Ƀ_���[�W�I\n");
            } else {
                printf("�����Ƀ_���[�W�I\n");
                flag *= -1;
            }
        }
        if(x[i]/4 == 0) {
            printf("�N���e�B�J���q�b�g�I");
            flag*=2;
        }
        if(flag > 0) {
            chp += flag;
        } else {
            php += flag;
        }
    }
}