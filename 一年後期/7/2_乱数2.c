//�����ăQ�[���@time�֐�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int ans,n;
    char yes;
    srand((unsigned int )time(NULL)); //�����̎�Ɍ��ݎ����𗘗p
    ans = rand()%100;//������100�Ŋ��������܂�
    printf("�����ăQ�[���F0�`100�̐����𓖂ĂĂ݂悤�I\n");
    while(1){
        scanf("%d",&n);
        if(ans == n) {
            break;
        } else if(ans > n) {
        printf("�����Ƒ傫����^��^\n");
        }else {
        printf("�����Ə�������^��^\n");
        }
    }
    printf("�����I\n�������^��^�H[Y/n]:");
    scanf(" %c",&yes);
    if(yes == 'y' || yes == 'Y') {
        main();
    }else {
    printf("����邨^��^");
    }
}
