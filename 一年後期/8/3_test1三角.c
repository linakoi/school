#include <stdio.h>
#include <math.h>
void main() {
    double a,b,c;
    printf("��a�̒���:");
    scanf("%lf",&a);

    printf("��b�̒���:");
    scanf("%lf",&b);

    printf("�p�xc�̑傫��:");
    scanf("%lf",&c);
    c = c*M_PI/180;

    double ans;

    ans = a*a + b*b - 2*a*b*cos(c);
    ans = sqrt(ans);

    printf("c�̒l��%.2f�ł�",ans);


}
