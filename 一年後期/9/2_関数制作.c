//ユーザ関数を使ったz＝ｘ+ｙの計算
#include<stdio.h>
int add(int ,int); //プロトタイプ宣言
int main() {
    int x,y,z;
    printf("xの値:");
    scanf("%d",&x);

    printf("yの値:");
    scanf("%d",&y);

    z = add(x,y);
    printf("zの値:%d",z);
}

int add(int a,int b) {
    int c;//加算結果を入れる
    c = a + b;
    return c;
}
