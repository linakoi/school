#include <stdio.h>
#include <math.h>

int kai(double,double,double,double *,double *);

int main() {
    double a,b,c;
    double *xa = &a,*xb = &b;
    scanf("%lf %lf %lf",&a,&b,&c);

    int answer = kai(a,b,c,xa,xb);
    printf("判別式D 1:二つの異なる実数解,0:重解,-1:虚数解\n");
    printf("判別式D:%d 一つ目の解:%lf 二つ目の解:%lf\n",answer,*xa,*xb);
}



int kai(double a,double b,double c,double *xa,double *xb){
    double d = b*b - 4*a*c;
    printf("%lf",d);

    if(d == 0) {
        *xa = -b/2/a; //重解
        *xb = *xa;
        return 0;
    } else if(d < 0) {
        return -1; //虚数解　オワオワリ
    } else {
        *xa = (-b + sqrt(d)) /2/a;
        *xb = (-b - sqrt(d)) /2/a;
        return 1;
    }


}
