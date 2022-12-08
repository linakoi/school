#include<stdio.h>

main() {
    int score = 0;
    printf("点数:");
    scanf("%d",&score);

    if(score < 0 || score >100) {
        printf("有効な値を入力してください\n");
    }else if(score <= 59) {
    printf("不可\n");
    } else if(score <= 69) {
    printf("可\n");
    } else if(score < 79 ){
    printf("良\n");
    } else {
    printf("優\n");
    }
}
