#include <stdio.h>

#define size 9

void showArray(int array[]){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
    int array[9] = {3,2,1,6,5,4,9,8,7};

    showArray(array);
    int flag = 1;
        for(int i = size-1;i > 0;i--) {
            if(flag == 0) {
                break;
            }
            int flag = 0;
            for(int j = 0;j < i;j++) {
                if(array[j] > array[j+1]) {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    flag == 1;
                } else {
                flag == 0;
                }
            }
        }
    showArray(array);
}
