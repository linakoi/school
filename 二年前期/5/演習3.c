#include <stdio.h>

main() {
    double sum = 0;
    double temp = 1;
    for(double k = 0;k <= 8 ;k++) {
        double temp = 1;
        for (int i = 0; i < k;i++){
            temp *= -0.5;
        }
        sum += temp;
    }
    printf("%lf",sum);
}
