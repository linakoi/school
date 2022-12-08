#include <stdio.h>
#define N 2
#define M 3

int cal(int a,int b,int c, int d,int e,int f,int s[][M],int answer[2]) {
    for(int x = -100;x < 100;x++) { // xとyを-100から100までの整数になると仮定する
        for(int y = -100;y < 100;y++) {
            if((a*x + b*y == c) && (d*x + e*y == f)) { //-100から100ますべての場合で計算する.当てはまったら終了する
                answer[0] = x;
                answer[1] = y;
                return 0;
            }
        }
    }
    printf("エラーです\n");
}

int main() {
    int a,b,c,d,e,f; //係数や定数項を指定
    printf("ax + by = c\ndx + ey = f\nです.\na-fを入力してください:");
    scanf ("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int s[N][M] = {{1,2,3},{4,5,6}};
    int answer[2] = {0};
    cal(a,b,c,d,e,f,s,answer);
    printf("x = %d\ny = %d",answer[0],answer[1]);
}
