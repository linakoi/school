#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("10i”%d\n",n);


    int remainder[10];
    int i= 0;

    size_t size = sizeof(remainder)/sizeof(remainder[0]);

    while(1){
        if(n == 0) break;
        remainder[i] = n%2;
        n /= 2;
        i++;
    }

    size = sizeof(remainder)/sizeof(remainder[0]);
    printf("\nremainder's size:%d\n",(int)size);

    i = 1;
    printf("\n“ñi”F");
    while(1) {
        printf("%d",remainder[(int)size-i]);
        i++;
        if(i > size) break;
    }
}
