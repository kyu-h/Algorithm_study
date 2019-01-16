#include <stdio.h>

int main()
{
    int n;
    int tmp = 0;
    scanf("%d", &n);

    if(n>1000 || n<1)
        return 0;

    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    return 0;
}
