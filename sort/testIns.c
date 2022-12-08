#include <stdio.h>

#define size 9

void showArray(int array[]){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
    int array[9] = {3,62,18,69,5,14,59,8,57};

    showArray(array);

    for(int i = 1;i < size;i++) {
        int save = array[i];
        int savej = i;
        for(int j = i-1;array[j] > save;j--) {
            array[j+1] = array[j];
            savej = j;
        }
        array[savej] = save;
    }
    showArray(array);
}
