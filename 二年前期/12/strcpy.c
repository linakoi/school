#include <stdio.h>
#include <string.h>
#define N 5
#define M 12

int main() {
    char str[N][M] = {"ohayou","konnnichiwa","konbanwa","yorosiku","otukaresama"};
    char temp[M];
    for(int i = 0;i < N ;i++) {
        printf("%d:%s\n",i,str[i]);
    }
    for(int i = 0;i < N-1;i++) {
        for(int k = 0; k < N-1;k++) {
            if(strcmp(str[k],str[k+1]) > 0){
                strcpy(temp,str[k]);
                strcpy(str[k],str[k+1]);
                strcpy(str[k+1],temp);
            }
        }
    }
    printf("--sort--\n");
    for(int i = 0;i < N;i++) {
        printf("%d:%s\n",i,str[i]);
    }
}
