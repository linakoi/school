#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)   //argc・・・引数の数 argv・・・引数の文字列を格納
{
    printf("引数の数 = %d\n",argc);
    for(int i = 0;i < argc;i++) {
        printf("%d番目の引数 =  %s\n",i,*argv++);
    }
    return 0;
}
