#include <stdio.h>
#define N 4

void func(int(*)[N]);

int main() {
    int a[N][N] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    func(a);
    return 0;
}

void func(int(*p)[N]) {
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            printf("%3d",p[i][j]);
        }
        printf("\n");
    }

}
