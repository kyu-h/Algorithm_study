#include <stdio.h>

int Qsort(int arr[], int x, int y){
    int left = x;
    int right = y;
    int pivot = arr[(x+y) / 2];

    do{
        while(arr[left] < pivot){
            left++;
        }
        while(arr[right] > pivot){
            right--;
        }
        if(left <= right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }while (left <= right);

        if(x < right){
            Qsort(arr, x, right);
        }
        if(y > left){
            Qsort(arr, left, y);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    if(n>1000000 || n<1)
        return 0;

    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n; i++){
        if(arr[i] > 1000000 || arr[i] < -1000000)
            return 0;
    }

    Qsort(arr, 0, n-1);

    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    return 0;
}
