#include <stdio.h>

int main(void){
	int tmp, i, j;
	int arr[10] = {10, 8, 6, 4, 2, 9, 7, 5, 3, 1};
	
	for(i=0; i<10; i++){
		for(j=0; j<9-i; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	
	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
