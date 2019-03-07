#include <stdio.h>

int main(void){
    int num;
    int i, j, tmp;
    scanf("%d", &num);

    if(num < 1 || num >1000){
        return 0;
    }

    int arr[num];

    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<num; i++){
        j = i;

        while(arr[j] < arr[j-1] && j > 0){
            tmp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }

    for(i=0; i<num; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
