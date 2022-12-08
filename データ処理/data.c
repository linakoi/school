#include <stdio.h>

int main() {
    double V,f,s,t;
    for(int i = 0;i < 4;i++){
        scanf("%lf %lf %lf %lf",&V,&f,&s,&t);
        printf("%5.3lf %5.3lf %5.3lf %5.3lf\n",V,f,s,t);
    }
}
