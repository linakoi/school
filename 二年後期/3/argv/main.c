#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) //argc = �����̐�,argv = �����̕�������i�[
{
    printf("�����̐� = %d\n",argv);
    for(int i= 0;i < argc;i++) {
        printf("%d�Ԗڂ̈��� = %s \n �A�h���X%p\n",i,argv[i],&argv[i],argv[i]);
    }
}
