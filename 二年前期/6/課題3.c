#include <stdio.h>
int func_r (int n) {
    if(n == 0) {
    return 1;
    }
    else {
        return n * func_r(n-1);
    }
}
int main() {
    printf("階乗を計算します.整数を入力してください:");
    int a;
    scanf("%d",&a);
    printf("%d",func_r(a));
}

