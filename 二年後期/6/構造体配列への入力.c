#include <stdio.h>
#define N 3
typedef struct {
    int id;
    char name[30];
    int score;
}student;
int main() {
    student kokugo[N];
    for(int i= 0;i < N;i++) {
        printf("%d l–Ú\n",i+1);
        printf("id:");
        scanf("%d",&kokugo[i].id);
        printf("name:");
        scanf(" %[^\n]",&kokugo[i].name);
        printf("score:");
        scanf("%d",&kokugo[i].score);
    }

    printf("‘Œê¬Ñ\n");
    for(int i = 0;i < N;i++) {
        printf("id:%3d name:%20s socore:%3d\n",
        kokugo[i].id,kokugo[i].name,kokugo[i].score
        );
    }

}


