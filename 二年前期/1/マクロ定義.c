#include <stdio.h>
#define N 10

main() {
    int sum = 1;
    for(int i = 1;i <= N;i++)sum*= i;
    printf("1`%d‚Ì‘˜a:%d",N,sum);
    sum = 1;

    for(int i = 0;i < 30 ;i++){
        sum *= 2;
        sum += 1;
    }

    printf("\n%d",sum);
    sum+=1;
    printf("\n%d",sum);
}
