#include<stdio.h>
#define N 3
#define M 4

int main() {
    int a[N][M] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[M] = a;
    for(int i= 0;i < N;i++) {
        for(int j= 0;j < M;j++) {
            printf("%3d",*(*(p+i)+j));
        }
        printf("\n");
    }
    printf("a[0][0] = %d\n",**p);
    printf("a[1][2] = %d\n",*(*(p+1)+2));
    return 0;
}
