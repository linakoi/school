#include<stdio.h>
#include <string.h>
#define N 4

typedef struct
{
    int id;
    char name[30];
    int score;
} student;

void func(student *);
int main()
{
    student siken[N];
    func(siken); // 構造体のアドレスを渡す

    for(int i=0; i<N; i++)
    {
        printf("id: %d  name:%15s score: %d\n",siken[i].id, siken[i].name,siken[i].score);
    }

    return 0;

}

void func(student *p) { //関数に構造体のアドレスを渡す 仮引数構造体利用
char *str[N]= {"きみ","おれ","ようきゃ","いんきゃ"};

    for(int i=0; i<N; i++)
    {
        p->id=i+3;

        strcpy(p->name,str[(i+3)%4]);
        p->score = 50+(i*30)%50;
        p++;

    }
}
