#include <stdio.h>
#include <math.h>

int kai(double,double,double,double *,double *);

int main() {
    double a,b,c;
    double *xa = &a,*xb = &b;
    scanf("%lf %lf %lf",&a,&b,&c);

    int answer = kai(a,b,c,xa,xb);
    printf("���ʎ�D 1:��̈قȂ������,0:�d��,-1:������\n");
    printf("���ʎ�D:%d ��ڂ̉�:%lf ��ڂ̉�:%lf\n",answer,*xa,*xb);
}



int kai(double a,double b,double c,double *xa,double *xb){
    double d = b*b - 4*a*c;
    printf("%lf",d);

    if(d == 0) {
        *xa = -b/2/a; //�d��
        *xb = *xa;
        return 0;
    } else if(d < 0) {
        return -1; //�������@�I���I����
    } else {
        *xa = (-b + sqrt(d)) /2/a;
        *xb = (-b - sqrt(d)) /2/a;
        return 1;
    }


}
