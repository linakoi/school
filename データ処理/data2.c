#include <stdio.h>
#include <math.h>

int main(){
    double V[6] = {0,2,4,6,8,10}; //�d���̒l�̔z��
    double I[6],O[5]; //�d���ƒ�R�̒l�̔z��
    for (int memori = 4;memori < 11;memori += 3){�@//�ڐ���4����3�𑫂��Ă����A10�ŏI������
        printf("\n      **** memori %d ****\n",memori);
        printf("------------------------------\n");
        printf("     V[V]     I[mA]     R[Ohm]\n");
        printf("------------------------------\n");

        double heikin = 0;

        for(int i = 0;i < 6;i++){
            scanf("%lf ",&I[i]); //�d���̒l��ǂݍ���
        }
        for(int i = 0;i < 6;i++){
            if(i == 0){ //�d����0�������ꍇ��R�͌v�Z���Ȃ�
                printf("     %5.2lf    %5.2lf      ---\n",V[i],I[i]);
            } else {
                O[i] = V[i]/I[i]*1000; //mA��A�ɕϊ�����
                printf("     %5.2lf    %5.2lf     %5.2lf\n",V[i],I[i],O[i]);
                heikin += V[i]/I[i]*1000;�@//���ς��Z�o���邽�߉��Z
            }
        }
        heikin /= 5;//�v�f���Ŋ���
        printf("------------------------------\n");
        printf("             Heikin     %3.2lf\n",heikin);
        printf("         =====================\n");

        double bunsan = 0;
        for(int i = 1;i < 6;i++){
            bunsan += (heikin-O[i])*(heikin-O[i]); //��R�̕��ςƂ̍��̓������Z����
        }
        bunsan /= 5;�@//�v�f���Ŋ���

        printf("             Bunsan     %5.2lf\n",bunsan);
        printf("         ---------------------\n");
        printf("         Hyoujunhensa   %5.2lf\n",sqrt(bunsan)); //�W���΍��͕��U�̕�����
        printf("         ---------------------\n");
    }
}
