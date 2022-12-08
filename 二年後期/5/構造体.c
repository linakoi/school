#include <stdio.h>

typedef struct{
    int id;
    char name[30];
    char department;
    int grade;
} gakusei;

int main() {
    //構造体定義で並べた順に記述していく id,name,department,grade
    gakusei dareka = {22222,"フミちゃん",'J',2};
    //各メンバには.をつけてアクセス
    printf("id:%d",dareka.id);
    return 0;
}
