//�񎟌��z��̍s�Ɨ񂪓���ւ��
#include <stdio.h>
int main() {
    int fir[3][3];
    int i,j;
    int c =1;
    for(i = 0;i < 3 ;i ++) {
        for(j = 0;j < 3 ;j++) {
            printf("�D���Ȑ�������͂��Ă�������.%d������:",c);
            scanf("%d",&fir[i][j]);
            c++;
        }
    }

    printf("�o��\n");
    for(i = 0;i < 3 ;i ++) {
        for(j = 0;j < 3 ;j++) {
            printf("%3d",fir[i][j]);
        }
        printf("\n");//�s���Ƃɉ��s
    }

    printf("����ւ�\n");
    for(i = 0;i < 3 ;i ++) {
        for(j = 0;j < 3 ;j++) {
            printf("%3d",fir[j][i]);
        }
        printf("\n");//�s���Ƃɉ��s
    }

}
