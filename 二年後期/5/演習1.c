#include <stdio.h>

typedef struct{
    int id;
    char name[30];
    int math;
    int english;
    int electric_circuit;
}seiseki;

int main() {
    //構造体定義で並べた順に記述していく id,name,department,grade
    seiseki A = {101,"群馬　太郎",90,80,95};
    seiseki B = {102,"前橋　花子",90,95,85};
    seiseki C = {103,"高崎 哲郎",85,80,100};
    //各メンバには.をつけてアクセス
    printf("A id:%d\n",A.id);
    printf("B name:%s\n",B.name);
    printf("C electric circuit:%d\n",C.electric_circuit);
    return 0;
}
