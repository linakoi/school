#include <stdio.h>

main() {
    int score[3][4];
    printf("���ѓ��́F �ԍ� ���w ���� �p��\n");
    for(int i = 0;i < 3;i++) {
        printf("%d�l�ځF",i+1);
        for(int j = 0;j < 4;j++) {
            scanf("%d",&score[i][j]);
        }
    }
    printf("| �ԍ�| ���w| ����| �p��|\n");
    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 4;j++) {
            printf("|%5d",score[i][j]);
        }
    printf("|\n");
    }


}
