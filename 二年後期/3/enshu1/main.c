#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) //argc = 引数の数,argv = 引数の文字列を格納
{
    printf("引数の数 = %d\n",argc);
    int wa = 0;
    for(int i= 1;i < argc;i++) {
        printf("%d番目の引数 = %s \n アドレス%p\n",i,argv[i],&argv[i],argv[i]);
        wa += atoi(argv[i]);
    }
    printf("\n和:%d",wa);
}
