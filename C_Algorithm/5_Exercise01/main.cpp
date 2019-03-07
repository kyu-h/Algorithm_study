//***************************************//
//
//             Using quickSort
//
//***************************************//

#include <stdio.h>

void quickSort(int *arr, int start, int end){
    if(start >= end){
        return;
    }

    int key = start;
    int i = start + 1;
    int j = end;
    int tmp;

    while(i <= j){
        while(arr[i] <= arr[key]){
            i++;
        }

        while(arr[j] >= arr[key] && j > start){
            j--;
        }

        if(i > j){
            tmp = arr[j];
            arr[j] = arr[key];
            arr[key] = tmp;
        }else {
            tmp = arr[j];
            arr[j] = arr[i];
            arr[i] = tmp;
        }
    }

    quickSort(arr, start, j-1);
    quickSort(arr, j+1, end);
}

int main(void){
    int data[3] = {0, };

    for(int i=0; i<3; i++){
        scanf("%d", &data[i]);

        if(data[i] < 1 || data[i] > 1000000){
            return 0;
        }
    }

    quickSort(data, 0, 2);

    for(int i=0; i<3; i++){
        printf("%d ", data[i]);
    }

    return 0;
}
