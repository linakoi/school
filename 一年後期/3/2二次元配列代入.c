//�񎟌��z��ւ̑��
#include <stdio.h>
int main() {
    int a[3][3];
    int i,j,k;
    k = 1;
    //��d���[�v�őS�v�f�ɑ��
    int c = 1;//�������ځA��p�ϐ�
    for(i = 0;i <3;i++) {
        for(j = 0;j < 3;j++) {
            printf("�D���Ȑ�������͂��Ă�������.%d������:",c);
            scanf("%d",&k);
            a[i][j] = k;
            c++;

        }
    }
    printf("�o�� \n");
    //2�����z��̏o�� i�sj��ŏo��
    for(i = 0;i < 3;i++) {
        for(j = 0;j < 3;j++) {
            printf("%3d",a[i][j]);
        }

    printf("\n");//�s���Ƃɉ��s
    }


}
