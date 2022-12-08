#include<stdio.h>
main (){
    int d[10] = {20,45,84,50,23,91,73,1,35,68};
    for (int i = 0;i < 10; i++) {
        if(d[i] %2 == 0) {
            printf ("%d\n",d[i]);
        }
    }
}
