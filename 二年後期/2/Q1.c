#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp;//�t�@�C���|�C���^
    //�t�@�C���\����
    char str[30]; //��������͂��i�[����悤
    fp = fopen("tekitou.dat","a");// �������̃t�@�C�����������݃��[�h(w)�ŊJ��
    if(fp == NULL) {
        printf("�t�@�C���I�[�v���G���[( �L�́M )");
        return 1;
    }

    while(1) {
        scanf("%s",str); //1�s���ƂɃL�[�{�[�h���͓ǂݍ���
        if(strcmp(str,"exit") == 0) {
            break;
            }
        fprintf(fp,"%s\n",str);//printf�̂悤�Ȏg�����Ńt�@�C���ɏ�������
    }
    fclose(fp);//�t�@�C�������
    return 0;
}
