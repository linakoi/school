#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp;//�t�@�C���|�C���^
    //�t�@�C���\����
    printf("( �L�́M )\n");

    char str[30]; //��������͂��i�[����悤
    fp = fopen("tekitou.dat","w");// �������̃t�@�C�����������݃��[�h(w)�ŊJ��
    if(fp = NULL) {
        printf("�t�@�C���I�[�v���G���[( �L�́M )");
        return 1;
    } else {
    printf("( �L�́M )2\n");
    }


    while(1) {
        scanf("%s",str); //1�s���ƂɃL�[�{�[�h���͓ǂݍ���
        if(strcmp(str,"exit") == 0) {
            printf("( �L�́M )3\n");
            break;
            }
        fprintf(fp,"%s\n",str);//printf�̂悤�Ȏg�����Ńt�@�C���ɏ�������
        printf("( �L�́M )4\n");
        }
        printf("( �L�́M )5\n");

        fclose(fp);//�t�@�C�������
        return 0;
}

