#include <stdio.h>
#include <stdlib.h>

int main() {
    int sai ,n;
    srand(10);
    printf("�T�C�R��:0����͂���ƏI���@���̕����F�T�C�R����U��");
    while(1) { //�������[�v
        scanf("%d",&n);
        if(n == 0) break;
        printf("�T�C�R���̐���:%d\n",rand()%6+1); //�������U�Ŋ��������܂�{�P
    }
}
