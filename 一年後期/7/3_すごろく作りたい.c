//�����ăQ�[���@time�֐�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int sai;
    char 1p,2p;
    srand((unsigned int )time(NULL)); //�����̎�Ɍ��ݎ����𗘗p
    ans = rand()%100;//������100�Ŋ��������܂�
    printf("�����ăQ�[���F0�`100�̐����𓖂ĂĂ݂悤�I\n");
    while(1){
        pritf("1�ŃT�C�R����U��܂�:");
        scanf("%c"&1p)
    }
    printf("�����I\n�������^��^�H[Y/n]:");
    scanf(" %c",&yes);
    if(yes == 'y' || yes == 'Y') {
        main();
    }else {
    printf("����邨^��^");
    }
}
