#include <stdio.h>
main () {
    int n;
    char c;
    scanf("%d",&n);
    scanf(" %c",&c);
    printf("%d\n%c\n",n,c);

    scanf(" %[abc]",&c); //abc�����󂯎��Ȃ�
    printf("%c",c);

    scanf("%[^\n]",&c);  //\n���󂯎��Ȃ�

}
