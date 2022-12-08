//二次元配列への代入
#include <stdio.h>
int main() {
    int a[3][3];
    int i,j,k;
    k = 1;
    //二重ループで全要素に代入
    int c = 1;//何文字目、専用変数
    for(i = 0;i <3;i++) {
        for(j = 0;j < 3;j++) {
            printf("好きな数字を入力してください.%d文字目:",c);
            scanf("%d",&k);
            a[i][j] = k;
            c++;

        }
    }
    printf("出力 \n");
    //2次元配列の出力 i行j列で出力
    for(i = 0;i < 3;i++) {
        for(j = 0;j < 3;j++) {
            printf("%3d",a[i][j]);
        }

    printf("\n");//行ごとに改行
    }


}
