#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[32];
    int komoji = 0,oomoji = 0,suuji = 0;
    printf("���������͂��Ă�������:");
    scanf("%s",str);
    for (int i = 0 ;str[i] != '\0';i++) {
        if (isupper(str[i])){
            oomoji++;
        }
        if (islower(str[i])){
            komoji++;
        }
        if (isdigit(str[i])){
            suuji++;
        }

    }
    printf("�啶����%d�����ł��I\n",oomoji);
    printf("��������%d�����ł��I\n",komoji);
    printf("������%d�����ł��I\n",oomoji+komoji);
    printf("������%d�ł��I\n",suuji);
}
