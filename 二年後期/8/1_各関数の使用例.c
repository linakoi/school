#include <stdio.h>
#include <string.h>

int main() {
    char input1[41];
    char input2[21];
    int a,n;
    //����
    scanf("%s",input1);
    scanf("%s",input2);
    //������̒���
    printf("lengs input1:%d input2:%d\n",strlen(input1),strlen(input2));
    //������̔�r
    printf("strcmp:");
    a = strcmp(input1,input2);

    if(a > 0) {
        printf("input1 > input2\n");
    } else if(a == 0) {
        printf("input1 = input2\n");
    } else {
        printf("input1 < input2\n");
    }
    //������̃R�s�[
    printf("copy:input1,input2");
    strcpy(input1,input2);
    printf("result:%s",input1);

    return 0;
}
