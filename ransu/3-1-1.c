#include <stdio.h>

int main () {
    int x[6];
    x[0] = 1;
    printf("x[0]�F%d\n",x[0]);
    for(int i = 1;i < 6;i++) {
        x[i] = (3*x[i-1])%7;
        printf("x[%d]�F%d\n",i,x[i]);
    }
}
