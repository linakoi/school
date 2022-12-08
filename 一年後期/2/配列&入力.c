//キーボード入力の数値10個(整数)を配列に入れ、配列内の50以上ある数値のみ表示する
#include<stdio.h>
main (){
    int d[10];
    int i;
    for (i = 0;i < 10; i++) {
        scanf("%d",&d[i]);
    }
    printf("50以上\n");
    for (i = 0;i < 10; i++) {
        if(d[i] >= 50){
            printf("%d\n",i[d]); //iとd入れ替わってる！すげーだろ！ｗ
        }
    }
    printf("偶数\n");
    for (i = 0;i < 10; i++) {

        if(d[i]%2 == 0) {
            printf("%d\n",i[d]);
        }
    }
}
