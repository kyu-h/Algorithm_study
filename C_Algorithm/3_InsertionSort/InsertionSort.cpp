#include <stdio.h>

int main(void){
	int i, j ,tmp;
	int arr[10] = {10, 8, 6, 4, 2, 9, 7, 5, 3, 1};
	
	for(i=0; i<9; i++){
		j = i;
		while(arr[j] > arr[j+1]){
			tmp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = tmp;
			j--;
		}
	}
	
	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
