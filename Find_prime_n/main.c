#include <stdio.h>

int main(){
    int num1;
    int i,j,n = 0;
    scanf("%d", &num1);

    if(num1 > 100 || num1 < 0){
        printf("%d\n", num1);
        return 0;
    }

    int arr[num1];

    for(int i=0; i<num1; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > 1000 || arr[i] < 1)
            return 0;
    }

    for(i=0; i<num1; i++){
        for(j=2; j<arr[i]; j++){
            if(arr[i]%j==0){
                break;
            }
        }
        if(arr[i] == j)
            n++;
    }

    printf("%d\n", n);

    return 0;
}
