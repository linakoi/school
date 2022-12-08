#include <math.h>
#include <stdio.h>

main() {
    double a,b,c;
    printf("二次方程式を、解きます！\n");
    printf("ax^+bx+cのうち、a,b,cを入力してください\n");
    printf("a:");
    scanf("%lf",&a);
    printf("b:");
    scanf("%lf",&b);
    printf("c:");
    scanf("%lf",&c);
    double D = b*b - 4*a*c;
    if(D == 0) {
        printf("D:%lf\n",D);
        printf("重解\n");
        printf("x = %lf",-1*b/2/a);
    } else if(D < 0){
        printf("D:%lf\n",D);
        printf("虚数解\n");
        double in = sqrt(sqrt(D * D));
        printf("%lf + %lfi\n",(-1*b)/2,in/2);
        printf("%lf - %lfi\n",(-1*b)/2,in/2);
    }else {
        printf("実数解\n");;
        printf("D:%lf\n",D);
        printf("x = %lf\n",(-1*b - sqrt(D))/2/a);
        printf("x = %lf\n",(-1*b + sqrt(D))/2/a);
    }
}
