#include <stdio.h>
#define N 3
void sort3(int number[]) { //�o�u���\�[�g
    for (int i=0; i<N; i++) { //���ׂĂ̗v�f�̑΂��čs��
        for (int j=i+1; j<N; j++) { //�ׂ̗v�f��
            if (number[i] < number[j]) { //�召���r���Ai�̂ق������������������ւ�
                int tmp =  number[i];
                number[i] = number[j];
                number[j] = tmp;
            }
        }
    }
}

int main(void)
{
    int number[N];

  /* �z��Ɋi�[���鐔�l����� */
    for (int i=0; i<N; ++i) {
        scanf("%d", &number[i]);
    }

    sort3(number); //�֐��Ăяo��

    printf("�~���\�[�g�������l\n");�@//�~���\�[�g�����l���o�͂���
    for (int i=0; i<N; ++i) {
        printf("%d\n", number[i]);
    }
}
