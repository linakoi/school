#include <stdio.h>

int diamond (int a, int b) {
    return a*b/2;
}

int  main(){
    int a,b;
    printf("菱形の面積を計算します.縦と横の長さを入力してください:");
    scanf("%d %d",&a,&b);
    int answer = diamond(a,b);
    printf("%d",answer);
}
