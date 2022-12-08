#include <stdio.h>
#define N 10

void func_const(const int a[],int b[]) {
    for(int i = 0;i < N;i++) {
        b[i] = 0;//エラーが出ない！やばいねー
    }
    for(int i = 0;i< N;i++) {
        printf("%d",a[i]);
    }
}

int main() {
    int a[N] ={0,1,2,3,4,5,6,7,8,9};
    func_const(a,a);
    return;
}
