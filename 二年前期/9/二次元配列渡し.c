#include <stdio.h>
#define N 3
#define M 3

void func_2a(int a[][M]) {
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < M;j++) printf("%x  ", &a[i][j]);
            printf("\n");
    }
}

int main() {
    int a[N][M] = {{1,2,3},{4,5,6},{7,8,9}};
    func_2a(a);
    return 0;
}
