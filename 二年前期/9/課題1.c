#include <stdio.h>
#define N 32

void trans(char a[]) {
    for(int i = 0;a[i] != '\0';i++) { //char�z��̍Ō�ɂ�\0����������
        if(a[i] <= 91) { //�啶���Ȃ�
            a[i] += 32;�@
        } else {�@//�������Ȃ�
            a[i] -=32;
        }
        printf("%c",a[i]); //����o�͂���
    }
}

int main() {
    char a[N] = "aiUeO";
    trans(a);
}
