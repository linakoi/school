#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) //argc = ˆø”‚Ì”,argv = ˆø”‚Ì•¶š—ñ‚ğŠi”[
{
    printf("ˆø”‚Ì” = %d\n",argc);
    int wa = 0;
    for(int i= 1;i < argc;i++) {
        printf("%d”Ô–Ú‚Ìˆø” = %s \n ƒAƒhƒŒƒX%p\n",i,argv[i],&argv[i],argv[i]);
        wa += atoi(argv[i]);
    }
    printf("\n˜a:%d",wa);
}
