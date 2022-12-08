#include<stdio.h>

int main() {
    double pi;
    double yn = 80.0,cn = 1.0,tn = 0.0;
    long n = 1000;


    for(long i = 0;i < n;i++) {
        yn /= 25.0;
        if(i%2 != 0) {
            tn -= yn/cn;
        } else {
            tn += yn/cn;
        }
        cn += 2.0;
    }
    pi = tn;
    printf("%.15f\n",pi);

    yn = 239.0*4.0,cn = 1.0,tn = 0.0;

    for(long i = 0;i < n;i++) {
        yn /= 57121.0;
        if(i%2 != 0) {
            tn -= yn/cn;
        } else {
            tn += yn/cn;
        }
        cn += 2.0;
    }

    pi -= tn;

    printf("%.15lf\n",pi);
}
