#include <stdio.h>

int main () {
    int a = 0,b = 0;
    int c = ++a; //aを1増やしてからcに代入する
    int d = b++; //bをdに代入してから,aに1を加える
    printf("c = %d,d = %d",c,d);
}
