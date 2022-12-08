#include <stdio.h>
#include <math.h>

int main(){
    double V[6] = {0,2,4,6,8,10}; //電圧の値の配列
    double I[6],O[5]; //電流と抵抗の値の配列
    for (int memori = 4;memori < 11;memori += 3){　//目盛り4から3を足していき、10で終了する
        printf("\n      **** memori %d ****\n",memori);
        printf("------------------------------\n");
        printf("     V[V]     I[mA]     R[Ohm]\n");
        printf("------------------------------\n");

        double heikin = 0;

        for(int i = 0;i < 6;i++){
            scanf("%lf ",&I[i]); //電流の値を読み込む
        }
        for(int i = 0;i < 6;i++){
            if(i == 0){ //電流が0だった場合抵抗は計算しない
                printf("     %5.2lf    %5.2lf      ---\n",V[i],I[i]);
            } else {
                O[i] = V[i]/I[i]*1000; //mAをAに変換する
                printf("     %5.2lf    %5.2lf     %5.2lf\n",V[i],I[i],O[i]);
                heikin += V[i]/I[i]*1000;　//平均を算出するため加算
            }
        }
        heikin /= 5;//要素数で割る
        printf("------------------------------\n");
        printf("             Heikin     %3.2lf\n",heikin);
        printf("         =====================\n");

        double bunsan = 0;
        for(int i = 1;i < 6;i++){
            bunsan += (heikin-O[i])*(heikin-O[i]); //抵抗の平均との差の二乗を加算する
        }
        bunsan /= 5;　//要素数で割る

        printf("             Bunsan     %5.2lf\n",bunsan);
        printf("         ---------------------\n");
        printf("         Hyoujunhensa   %5.2lf\n",sqrt(bunsan)); //標準偏差は分散の平方根
        printf("         ---------------------\n");
    }
}
