#include <stdio.h>

void print_intArray(int max_size, int abcd[max_size]){
    printf("int test: ");
    for(int i=0;i<max_size;i++) {
        printf("%d ", abcd[i]);
    }
    printf("\n");
}

int main() {
    int test[10]={1,2,3,0,0,0,0,0,0,0};

    print_intArray(10, test);
    return 0;
}