#include <stdio.h>0
#include <stdlib.h>

main() {
    double score[5][6];
    double save[5]; //StudentAVErage
    double cave[5];//CurriculumAVErage
    printf("���ѓ��́F �ԍ� ���w ���� �p�� �d�C ���\n");
    for(int i = 0;i < 5;i++) {
        printf("%d�l�ځF",i+1);
        for(int j = 0;j < 6;j++) { //�w���̔ԍ��Ɛ��т�score�z��ɑ��

            score[i][j] = rand()%100 + 1; //�L�[�{�[�h���͂����Ǎ��͎����œ��͂��Ă���

            if(j != 0) { //�w���̔ԍ��ȊO��
                save[i] += score[i][j]; //StudentAVE�ɉ��Z
            }else{
                score[i][j] = i+1;
            }
        }
    }

    printf("\n| �ԍ�| ���w| ����| �p��| �d�C| ���| ����|\n");
    for(int i = 0;i < 5;i++) {//5�l5����+�ԍ��P��
        for(int j = 0;j < 6;j++) {
            printf("|%5.0lf",score[i][j]); //�_���Ɣԍ����o��
        }
        printf("|%5.2lf|\n",save[i]/5); //�w�����̕��ς��o��
    }

    for(int i = 0;i < 5 ;i++) {//5���Ȃ��Ƃ̕��ς��v�Z����
        for(int j = 0;j < 5;j++) {
            cave[i] += score[j][i+1]; //���Ȃ��Ƃɑ�����邽�߁Ai��j�����ւ��đ��
        }
    }
    printf("| ����");
    for(int i = 0;i < 5;i++) {
            printf("|%5.2lf",cave[i] /= 5);//���ς��o��
    }
    printf("|\n");

}
