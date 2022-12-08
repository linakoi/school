#include <stdio.h>

main() {
    double sum = 0;
    for(double k = 1;k <= 20 ;k++) {
        sum += 1/(2*k - 1);
    }
    printf("%lf",sum);
}
