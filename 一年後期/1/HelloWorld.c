#include <stdio.h>

int main()
{
    //Display hello world
    int a,b;
    a = 100;
    b = 23;
    printf("Enter First number & Space & Second number.\n");
    scanf("%d %d",&a,&b);
    printf("*****%3d ‚Æ %3d ‚ÌŒvŽZ\n",a,b);
    printf("%3d + %3d = %3d\n",a,b,a+b);
    printf("%3d - %3d = %3d\n",a,b,a-b);
    printf("%3d * %3d = %3d \n",a,b,a*b);
    printf("%3d / %3d = %3d\n",a,b,a/b);
    return 0;
}
