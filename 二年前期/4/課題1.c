#include <stdio.h>0
#include <stdlib.h>

main() {
    double score[5][6];
    double save[5]; //StudentAVErage
    double cave[5];//CurriculumAVErage
    printf("成績入力： 番号 数学 物理 英語 電気 情報\n");
    for(int i = 0;i < 5;i++) {
        printf("%d人目：",i+1);
        for(int j = 0;j < 6;j++) { //学生の番号と成績をscore配列に代入

            score[i][j] = rand()%100 + 1; //キーボード入力だけど今は自動で入力している

            if(j != 0) { //学生の番号以外を
                save[i] += score[i][j]; //StudentAVEに加算
            }else{
                score[i][j] = i+1;
            }
        }
    }

    printf("\n| 番号| 数学| 物理| 英語| 電気| 情報| 平均|\n");
    for(int i = 0;i < 5;i++) {//5人5教科+番号１個
        for(int j = 0;j < 6;j++) {
            printf("|%5.0lf",score[i][j]); //点数と番号を出力
        }
        printf("|%5.2lf|\n",save[i]/5); //学生毎の平均を出力
    }

    for(int i = 0;i < 5 ;i++) {//5教科ごとの平均を計算する
        for(int j = 0;j < 5;j++) {
            cave[i] += score[j][i+1]; //教科ごとに代入するため、iとjを入れ替えて代入
        }
    }
    printf("| 平均");
    for(int i = 0;i < 5;i++) {
            printf("|%5.2lf",cave[i] /= 5);//平均を出力
    }
    printf("|\n");

}
