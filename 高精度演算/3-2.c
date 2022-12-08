#include<stdio.h>

int main() {
    double a,pi = 0; //a:各項 pi:最終的な円周率π
    long n;
    printf("n:");
    scanf("%ld",&n);
    for(long i = 0;i < n;i++) {
        a = 1.0/(2.0*i+1.0); //arctan1の各項を求める
        if(i%2 != 0){ //aを、iが偶数の場合は正の数,奇数の場合は負の数にする
            a *= -1;
            }
        pi+= a; //aをpiに加算
    }
    pi *= 4; //π=4*arctan1のため
    printf("%.15lf\n",pi);
}
