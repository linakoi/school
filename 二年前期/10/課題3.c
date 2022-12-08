#include <stdio.h>
#define N 3
void sort3(int number[]) { //バブルソート
    for (int i=0; i<N; i++) { //すべての要素の対して行う
        for (int j=i+1; j<N; j++) { //隣の要素と
            if (number[i] < number[j]) { //大小を比較し、iのほうが小さかったら入れ替え
                int tmp =  number[i];
                number[i] = number[j];
                number[j] = tmp;
            }
        }
    }
}

int main(void)
{
    int number[N];

  /* 配列に格納する数値を入力 */
    for (int i=0; i<N; ++i) {
        scanf("%d", &number[i]);
    }

    sort3(number); //関数呼び出し

    printf("降順ソートした数値\n");　//降順ソートした値を出力する
    for (int i=0; i<N; ++i) {
        printf("%d\n", number[i]);
    }
}
