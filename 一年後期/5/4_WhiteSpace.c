#include <stdio.h>
main () {
    int n;
    char c;
    scanf("%d",&n);
    scanf(" %c",&c);
    printf("%d\n%c\n",n,c);

    scanf(" %[abc]",&c); //abc‚µ‚©Žó‚¯Žæ‚ç‚È‚¢
    printf("%c",c);

    scanf("%[^\n]",&c);  //\n‚ðŽó‚¯Žæ‚ç‚È‚¢

}
