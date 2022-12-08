#include<stdio.h>

#define size 9

void showArray(int array[]){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}


int main() {
    int array[9] = {34,25,61,76,65,24,89,68,47};

    showArray(array);

    int min = array[0];
    for(int i = 0;i < size-1;i++) {
        for(int j = i+1;j < size;j++) {
            if(min > array[j]) {
                int temp = min;
                min = array[j];
                array[j] = temp;
            }
        }
    }
    showArray(array);
}
