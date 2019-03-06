#include <stdio.h>

int number = 10;
int arr[10] = {3, 7, 8, 1, 5, 9, 6, 10, 2, 4};

void quickSort(int *data, int start, int end){
	if(start >= end){ // ���Ұ� 1���� ��� 
		return;
	}
	
	int key = start; //Ű�� ù ��° ���� 
	int i = start + 1;
	int j = end;
	int tmp;
	
	while(i <= j){ //������ �� ���� �ݺ� 
		while(arr[i] >= arr[key]){ //Ű ������ ū ���� ���������� ���������� �̵�, *�Ʒ��Ͱ� ���� ��ȣ ��ġ�� �ٲٸ� �������� �������� �ٲ� 
			i++;
		}
		
		while(arr[j] <= arr[key] && j > start){ //Ű ������ ���� ���� ����������, *�����Ͱ� ���� ��ȣ ��ġ�� �ٲٸ� �������� �������� �ٲ�
			j--;
		}
		if(i > j){//���� ������ ���¸� Ű ���� ��ü 
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
