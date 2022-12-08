#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp;//ファイルポインタ
    //ファイル構造体
    char str[30]; //文字列入力を格納するよう
    fp = fopen("tekitou.dat","a");// 第一引数のファイルを書きこみモード(w)で開く
    if(fp == NULL) {
        printf("ファイルオープンエラー( ´∀｀ )");
        return 1;
    }

    while(1) {
        scanf("%s",str); //1行ごとにキーボード入力読み込み
        if(strcmp(str,"exit") == 0) {
            break;
            }
        fprintf(fp,"%s\n",str);//printfのような使い方でファイルに書き込み
    }
    fclose(fp);//ファイルを閉じる
    return 0;
}
