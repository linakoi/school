#include <stdio.h>

int main () {
    float a[2];
    for(int i = 0;i < 2;i++) {
        printf("Enter one number please\n");
        scanf("%f",&a[i]);
    }
    printf("%f��%f�̌v�Z\n",a[0],a[1]);
    printf("%f + %f = %f\n",a[0],a[1],a[0] + a[1]);
    printf("%f - %f = %f\n",a[0],a[1],a[0] - a[1]);
    printf("%f * %f = %f\n",a[0],a[1],a[0] * a[1]);
    printf("%f / %f = %f\n",a[0],a[1],a[0] / a[1]);
}
