#include <stdio.h>

int f2017(int num){
    if (num == 0) return 0;
	if (num <= 1) return 500 * 10000;
	if (num <= 3) return 300 * 10000;
	if (num <= 6) return 200 * 10000;
	if (num <= 10) return 50 * 10000;
	if (num <= 15) return 30 * 10000;
	if (num <= 21) return 10 * 10000;

	return 0;
}

int f2018(int num){
    if (num == 0) return 0;
	if (num <= 1) return 512 * 10000;
	if (num <= 3) return 256 * 10000;
	if (num <= 7) return 128 * 10000;
	if (num <= 15) return 64 * 10000;
	if (num <= 31) return 32 * 10000;

	return 0;
}

int main(){
    int num1, num2, times = 0;
    scanf("%d", &times);

    for(int i=0; i<times; i++){
        scanf("%d%d", &num1, &num2);
        printf("%d\n", f2017(num1) + f2018(num2));
    }

    return 0;
}
