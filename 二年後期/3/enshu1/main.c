#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) //argc = �����̐�,argv = �����̕�������i�[
{
    printf("�����̐� = %d\n",argc);
    int wa = 0;
    for(int i= 1;i < argc;i++) {
        printf("%d�Ԗڂ̈��� = %s \n �A�h���X%p\n",i,argv[i],&argv[i],argv[i]);
        wa += atoi(argv[i]);
    }
    printf("\n�a:%d",wa);
}
