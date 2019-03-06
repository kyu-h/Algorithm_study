#include <stdio.h>

int number = 10;
int arr[10] = {3, 7, 8, 1, 5, 9, 6, 10, 2, 4};

void quickSort(int *data, int start, int end){
	if(start >= end){ // 원소가 1개인 경우 
		return;
	}
	
	int key = start; //키는 첫 번째 원소 
	int i = start + 1;
	int j = end;
	int tmp;
	
	while(i <= j){ //엇갈릴 때 까지 반복 
		while(arr[i] >= arr[key]){ //키 값보다 큰 값을 만날때까지 오른쪽으로 이동, *아래것과 같이 등호 위치를 바꾸면 오름차순 내림차순 바뀜 
			i++;
		}
		
		while(arr[j] <= arr[key] && j > start){ //키 값보다 작은 값을 만날때까지, *위에것과 같이 등호 위치를 바꾸면 오름차순 내림차순 바뀜
			j--;
		}
		if(i > j){//현재 엇갈린 상태면 키 값과 교체 
			tmp = arr[j];
			arr[j] = arr[key];
			arr[key] = tmp;
		}else {
			tmp = data[j];
			data[j] = data[i];
			data[i] = tmp;
		}
	}
	
	quickSort(arr, start, j-1);
	quickSort(arr, j+1, end);
}


int main(void){
	quickSort(arr, 0, number-1);
	
	for(int i=0; i<number; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
