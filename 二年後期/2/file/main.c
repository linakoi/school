#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp;//ファイルポインタ
    //ファイル構造体
    printf("( ´∀｀ )\n");

    char str[30]; //文字列入力を格納するよう
    fp = fopen("tekitou.dat","w");// 第一引数のファイルを書きこみモード(w)で開く
    if(fp = NULL) {
        printf("ファイルオープンエラー( ´∀｀ )");
        return 1;
    } else {
    printf("( ´∀｀ )2\n");
    }


    while(1) {
        scanf("%s",str); //1行ごとにキーボード入力読み込み
        if(strcmp(str,"exit") == 0) {
            printf("( ´∀｀ )3\n");
            break;
            }
        fprintf(fp,"%s\n",str);//printfのような使い方でファイルに書き込み
        printf("( ´∀｀ )4\n");
        }
        printf("( ´∀｀ )5\n");

        fclose(fp);//ファイルを閉じる
        return 0;
}

