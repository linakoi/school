#include <stdio.h>

#define N 3
#define M 4

int main() {
    int d[N][M] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int *p;
    p = (int *)d; //ポインタに二次元配列の先頭アドレスを代入
    for(int i = 0;i < N; i++) {
        for(int j = 0;j < M;j++) {
            printf("%3d",*(p+i*4+j));
        }
        printf("\n");
    }
    return 0;
}
