#include <stdio.h>

main() {
    int score[3][4];
    printf("成績入力： 番号 数学 国語 英語\n");
    for(int i = 0;i < 3;i++) {
        printf("%d人目：",i+1);
        for(int j = 0;j < 4;j++) {
            scanf("%d",&score[i][j]);
        }
    }
    printf("| 番号| 数学| 国語| 英語|\n");
    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 4;j++) {
            printf("|%5d",score[i][j]);
        }
    printf("|\n");
    }


}
