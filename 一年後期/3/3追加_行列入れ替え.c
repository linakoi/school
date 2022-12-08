//二次元配列の行と列が入れ替わる
#include <stdio.h>
int main() {
    int fir[3][3];
    int i,j;
    int c =1;
    for(i = 0;i < 3 ;i ++) {
        for(j = 0;j < 3 ;j++) {
            printf("好きな数字を入力してください.%d文字目:",c);
            scanf("%d",&fir[i][j]);
            c++;
        }
    }

    printf("出力\n");
    for(i = 0;i < 3 ;i ++) {
        for(j = 0;j < 3 ;j++) {
            printf("%3d",fir[i][j]);
        }
        printf("\n");//行ごとに改行
    }

    printf("入れ替え\n");
    for(i = 0;i < 3 ;i ++) {
        for(j = 0;j < 3 ;j++) {
            printf("%3d",fir[j][i]);
        }
        printf("\n");//行ごとに改行
    }

}
