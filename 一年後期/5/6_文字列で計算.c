#include <stdio.h>
int main () {
    char c[64];
    scanf("%s",c);
    int result = 0;

    switch(c[1]) {
    case 43: result = (c[0]-48) + (c[2]-48);
        printf("%d",result);
        break;


    case 45: result = (c[0]-48) - (c[2]-48);

        printf("%d",result);
        break;


    case 47: result = (c[0]-48) / (c[2]-48);

        printf("%d",result);
        break;


    case 42: result = (c[0]-48) * (c[2]-48);

        printf("%d",result);
        break;


    }

    if(c[1] == 43)
        result = c[0];
}

