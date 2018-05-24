#include <stdio.h>
#include <intrin.h>

void chartoint(int max_size, char test[max_size]){
    int a[max_size];

    printf("char to int test: ");
    for(int i=0;i<max_size;i++) {
        a[i] = (int)test[i];
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    unsigned char test[50]="korea";
    int length = 0;

    length = strlen(test);
    chartoint(length, test);

    return 0;
}