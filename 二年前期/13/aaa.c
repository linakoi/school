#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;

    char str[30];
    fp = fopen("tekitou.dat","w");
    if(fp == NULL) {
        printf("�t�@�C���I�[�v���G���[");
        return;
    }
    while(1) {
        scanf("%s",str);
        if(strcmp(str,"exit")== 0) break;
        fprintf(fp,"%s\n",str);
    }

    fclose(fp);
    return 0;

}
