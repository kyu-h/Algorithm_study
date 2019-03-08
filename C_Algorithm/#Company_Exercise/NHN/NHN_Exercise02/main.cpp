#include <iostream>

using namespace std;

int num;

int main(){
    cin >> num;

    int arr[num][num];

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
