#include <math.h>
#include <stdio.h>

main() {
    double a,b,c;
    printf("�񎟕��������A�����܂��I\n");
    printf("ax^+bx+c�̂����Aa,b,c����͂��Ă�������\n");
    printf("a:");
    scanf("%lf",&a);
    printf("b:");
    scanf("%lf",&b);
    printf("c:");
    scanf("%lf",&c);
    double D = b*b - 4*a*c;
    if(D == 0) {
        printf("D:%lf\n",D);
        printf("�d��\n");
        printf("x = %lf",-1*b/2/a);
    } else if(D < 0){
        printf("D:%lf\n",D);
        printf("������\n");
        double in = sqrt(sqrt(D * D));
        printf("%lf + %lfi\n",(-1*b)/2,in/2);
        printf("%lf - %lfi\n",(-1*b)/2,in/2);
    }else {
        printf("������\n");;
        printf("D:%lf\n",D);
        printf("x = %lf\n",(-1*b - sqrt(D))/2/a);
        printf("x = %lf\n",(-1*b + sqrt(D))/2/a);
    }
}
