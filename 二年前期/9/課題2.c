#include <stdio.h>
#define N 3
#define M 3

void trans(int a[][M]) {
    int temp[N][M]; //�ꎞ�z������A�������
    for(int i = 0;i < N;i++) {
        for(int j = 0; j < M;j++) {
        temp[i][j] = a[i][j];
        }
    }
    for(int i = 0;i < N;i++) { //temp�z���a�z��ɑ��
        for(int j = 0; j < M;j++) {
        a[i][j] = temp[j][i];
        }
    }
}

int main() {
    int a[N][M] = {{1,2,3},{4,5,6},{7,8,9}};
    trans(a);
    for(int i = 0;i < N;i++) {
        for(int j = 0; j < M;j++) {
            printf("%d ",a[i][j]);
        }
    }
}
