#include <stdio.h>
#include <math.h>
void main() {
    double a,b,c;
    printf("辺aの長さ:");
    scanf("%lf",&a);

    printf("辺bの長さ:");
    scanf("%lf",&b);

    printf("角度cの大きさ:");
    scanf("%lf",&c);
    c = c*M_PI/180;

    double ans;

    ans = a*a + b*b - 2*a*b*cos(c);
    ans = sqrt(ans);

    printf("cの値は%.2fです",ans);


}
