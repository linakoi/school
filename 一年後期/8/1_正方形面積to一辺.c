//正方形の面積から一辺の長さを計算
#include <stdio.h>
#include <math.h>
int main() {
    double s;
    double l;
    printf("正方形の面積:");
    scanf("%lf",&s);
    l = sqrt(s);
    printf("辺の長さ:%f",l);
}
