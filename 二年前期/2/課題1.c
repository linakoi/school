#include<stdio.h>

main() {
    printf("2022年四月の日付を入力してください:");
    int m = 0;
    scanf("%d",&m);
    if(m < 0 || 30 < m) {
        printf("エラーなんですわー");
    } else {
        m %= 7;
        switch(m){
        case 4:printf("月曜日");break;
        case 5:printf("火曜日");break;
        case 6:printf("水曜日");break;
        case 0:printf("木曜日");break;
        case 1:printf("金曜日");break;
        case 2:printf("土曜日");break;
        case 3:printf("日曜日");break;
        default :printf("不可雑魚");
        }
    }
}
