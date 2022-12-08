#include<stdio.h>

main() {
    printf("点数:");
    int score = 0;
    scanf("%d",&score);
    if(score < 0 || 100 < score) {
        printf("エラーなんですわー");
    } else {
        score /= 10;
        switch(score){
        case 6:printf("可");break;
        case 7:printf("良");break;
        case 8:
        case 9:
        case 10:printf("優");break;
        default :printf("不可雑魚");
        }
    }
}
