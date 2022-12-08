#include <stdio.h>
#include <math.h>
void main() {
    double a,b,c;
    printf("•Óa‚Ì’·‚³:");
    scanf("%lf",&a);

    printf("•Ób‚Ì’·‚³:");
    scanf("%lf",&b);

    printf("Šp“xc‚Ì‘å‚«‚³:");
    scanf("%lf",&c);
    c = c*M_PI/180;

    double ans;

    ans = a*a + b*b - 2*a*b*cos(c);
    ans = sqrt(ans);

    printf("c‚Ì’l‚Í%.2f‚Å‚·",ans);


}
