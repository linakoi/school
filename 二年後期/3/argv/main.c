#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) //argc = 引数の数,argv = 引数の文字列を格納
{
    printf("引数の数 = %d\n",argv);
    for(int i= 0;i < argc;i++) {
        printf("%d番目の引数 = %s \n アドレス%p\n",i,argv[i],&argv[i],argv[i]);
    }
}
