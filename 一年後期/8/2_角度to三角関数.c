#include <stdio.h>
#include <math.h>
void main() {
    double a,b;
    printf("�O�p�֐������߂����p�x����͂��Ă�������:");
    scanf("%lf",&a);
    a = a * M_PI / 180;


    printf("sin:%.2f\n",sin(a));

    printf("cos:%.2f\n",cos(a));

    printf("tan:%.2f\n",tan(a));
}
