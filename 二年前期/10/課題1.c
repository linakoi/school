#include <stdio.h>

void swap(int *a,int *b) {
    int temp = *a; //*aをtempに保持する
    *a = *b; //*bを*aに代入
    *b = temp; //*bにtempを代入
}

int main() {
    int a = 2;
    int b = 3;
    printf("a:%d b:%d\n",a,b); //入れ替える前に確認
    swap(&a,&b); //関数呼び出し
    printf("a:%d b:%d",a,b); //入れ替え後
}
