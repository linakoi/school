#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)   //argc�E�E�E�����̐� argv�E�E�E�����̕�������i�[
{
    printf("�����̐� = %d\n",argc);
    for(int i = 0;i < argc;i++) {
        printf("%d�Ԗڂ̈��� =  %s\n",i,*argv++);
    }
    return 0;
}
