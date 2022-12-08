#include <stdio.h>
#define N 4

void printb(unsigned int a) {
    int d[N] ={0};
    for(int i = N-1;i >= 0;i--) {
        d[i] = a%2;
        a /= 2;
    }
    printf("0b");
    for(int i = 0;i < N;i++) {
        printf("%d",d[i]);
    }
    printf("\n");
}

int main() {
    int a = 0b0101;
    int b = 0b0011;
    printb(a & b);
    printb(a | b);

}
