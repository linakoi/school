#include <stdio.h>
main() {
    int test[10] = {78,65,82,97,55,87,45,65,72,51};
    int sum = 0;
    int i = 0;
    for(;i < 10;i++) {
        if(test[i]>= 80) {
            sum++;
        }
    }
    printf("%d",sum);
}
