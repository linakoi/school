//�L�[�{�[�h���͂̐��l10��(����)��z��ɓ���A�z�����50�ȏ゠�鐔�l�̂ݕ\������
#include<stdio.h>
main (){
    int d[10];
    int i;
    for (i = 0;i < 10; i++) {
        scanf("%d",&d[i]);
    }
    printf("50�ȏ�\n");
    for (i = 0;i < 10; i++) {
        if(d[i] >= 50){
            printf("%d\n",i[d]); //i��d����ւ���Ă�I�����[����I��
        }
    }
    printf("����\n");
    for (i = 0;i < 10; i++) {

        if(d[i]%2 == 0) {
            printf("%d\n",i[d]);
        }
    }
}
