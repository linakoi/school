#include <stdio.h>

int main() {
    char *str[] = {"abc","def","ghi"};
    for(int i = 0;i < 3;i++) {
        printf("str[%d]�̃A�h���X%p:%s�̃A�h���X%p\n",i,&str[i],str[i],str[i]);
    }
}
