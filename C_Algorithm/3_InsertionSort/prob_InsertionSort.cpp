#include <stdio.h>

int main(void){
	int size, i, j, tmp = 0;	
	int arr[10] = {0, };
	
	scanf("%d", &size);
	
	for(i=0; i<10; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<size; i++){
		j = i;
		while(arr[j-1] > arr[j] && j > 0){
			tmp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = tmp;
			j--;
		}
	}
	
	for(i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
