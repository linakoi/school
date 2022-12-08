#include <stdio.h>

int main() {
    char *str[] = {"abc","def","ghi"};
    char **p = str; //ダブルポインタにポインタの先頭アドレスを代入まじ卍
    printf("*p    :%s\n",*p);//文字列
    printf("*(p+1):%s\n",*(p+1));
    printf("*(p+2):%s\n",*(p+2));

    printf("**p        :%c\n",**p+1); //文字
    printf("*(*p+1)    :%c\n",*(*p+1));
    printf("*(*p+2)    :%c\n",*(*p+2));
    printf("*(*(p+1)+0)    :%c\n",*(*(p+1)+0));
    printf("*(*(p+1)+1)    :%c\n",*(*(p+1)+1));
    printf("*(*(p+1)+2)    :%c\n",*(*(p+1)+2)) ;

    for(int i = 0;i < 3;i++) {
        for(int j = 0;*(*(p+i)+j) != 0;j++) {
            printf("%c",*(*(p+i)+j));
        }
    }
    return 0;

}
