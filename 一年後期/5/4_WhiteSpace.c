#include <stdio.h>
main () {
    int n;
    char c;
    scanf("%d",&n);
    scanf(" %c",&c);
    printf("%d\n%c\n",n,c);

    scanf(" %[abc]",&c); //abcしか受け取らない
    printf("%c",c);

    scanf("%[^\n]",&c);  //\nを受け取らない

}
