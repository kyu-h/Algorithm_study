#include <stdio.h>

int main(){
	int min, index, tmp, i, j;
	int arr[10] = {10, 8, 6, 4, 2, 9, 7, 5, 3, 1};
	
	for(i=0; i<10; i++){
		min = 999;
		for(j=i; j<10; j++){
			if(min > arr[j]){
				min = arr[j];
				index = j;
			}
		}
		
		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}
	
	for(int i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
