#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) //argc = ˆø”‚Ì”,argv = ˆø”‚Ì•¶š—ñ‚ğŠi”[
{
    printf("ˆø”‚Ì” = %d\n",argv);
    for(int i= 0;i < argc;i++) {
        printf("%d”Ô–Ú‚Ìˆø” = %s \n ƒAƒhƒŒƒX%p\n",i,argv[i],&argv[i],argv[i]);
    }
}
