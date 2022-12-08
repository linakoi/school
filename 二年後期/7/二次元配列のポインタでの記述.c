#include <stdio.h>

#define N 4

int main() {
    int a[N][N] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int i = 0;i < N;i++) {
        *((*a+i)) *= 2;
    }
    for(int i = 0;i< N;i++) {
        *(*(a+1)+i) += 3;
    }
    *(*(a+2)+3) -=1;
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            printf("%3d",*(*(a+i)+j));
        }
        printf("\n");
    }
    return 0;
}
