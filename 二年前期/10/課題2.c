#include <stdio.h>
#include <stdlib.h>
#define N 10

void mum(int d[],int *max,int *min) {
    for(int i = 0;d[i] > 0;i++){ //�z��̗v�f�̍Ōオ-1�����炻���܂Ŕ���
        if(*max < d[i]) { //*max���傫����������
            *max = d[i];
        }
        if(*min > d[i]) { //*min��菬������������
            *min = d[i];
        }
    }
}

int main() {
    int d[N] = {0}; //�S�v�f0�ŏ�����
    for(int i = 0;i < N-1;i++) { //for����rand�֐��Ŕz��̗v�f����
         d[i] = rand()%100;
        printf("%d\n",d[i]); //���ׂďo��
    }
    d[N-1] = -1; //�z��̍Ō��-1����
    printf("%d\n",d[N-1]);
    int max = -1;
    int min = 100; //max��min���ŏ��l�A�ő�l�Ő錾
    mum(d,&max,&min); //�֐��Ăяo��
    printf("\nmax:%d\nmin:%d",max,min);
}
