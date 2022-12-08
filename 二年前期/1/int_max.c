#include <stdio.h>
main() {
    int sum = 1;

    for(int i = 0;i < 30 ;i++){
        sum *= 2;
        sum += 1;
    }

    printf("%d",sum);
    sum+=1;
    printf("\n%d",sum);
}
