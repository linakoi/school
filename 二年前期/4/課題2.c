#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));//����Ⴄ�����𔭐������邽��
    int a = rand();//a������
    int b;//���Ƀ��[�U�̓��͂����l��������
    int cont; //Esc��������
    int flag = 0;//Esc�ŏI���������P�ɂ���
    printf("�����ăQ�[���ł�\n��������͂��Ă�������:");
    do{
        scanf("%d",&b);
        if(a > b){
            printf("�����Ƒ傫���ł�\n");
        } else if(a < b) {
            printf("�����Ə������ł�\n");
        }
        printf("Esc�ŏI�����܂�:");
        cont = getch();
        if(cont==27){
            flag = 1;//���ꂪ�P�Ȃ�I�����܂��Əo�͂��I���
            break;
        }
    }while(a != b);//a==b�ƂȂ�܂ő�����
    if(flag == 1) {
        printf("\n�I�����܂�");
    }else{
        printf("�����ł��I\n");
    }
}
