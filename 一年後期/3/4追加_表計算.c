#include <stdio.h>
int main () {
    int i;
    float seiseki[5][4] ={
        {67,99,70,82},
        {45,60,90,83},
        {90,85,88,95},
        {56,40,65,60},
        {78,65,83,75}
    };
    float seitosum = 0;
    float gakkasum = 0;
    printf("number:�o�Ȕԍ�\n");
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < 4;j++) {
            seitosum += seiseki[i][j];
        }
        printf("%d�̕��ϓ_:%3.2f\n",i+1,seitosum/4);
        seitosum = 0;
    }
    printf("\n1:���w,2:����,3:�p��,4:�d�C��H\n");
    for(int j = 0;j < 4;j++) {
        for(int i = 0;i < 5;i++) {
            gakkasum += seiseki[i][j];
        }
        printf("%d�̕��ϓ_:%3.2f\n",j+1,gakkasum/5);
        gakkasum = 0;
    }
}
