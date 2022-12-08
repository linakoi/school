#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[32];
    int komoji = 0,oomoji = 0,suuji = 0;
    printf("文字列を入力してください:");
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
    printf("大文字は%d文字です！\n",oomoji);
    printf("小文字は%d文字です！\n",komoji);
    printf("文字は%d文字です！\n",oomoji+komoji);
    printf("数字は%d個です！\n",suuji);
}
