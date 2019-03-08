#include <stdio.h>

int d[100]; //전역변수로 선언하면 전부 0으로 초기화 되어 있음.

int dp(int x){
    if(x == 1) return 1;
    if(x == 2) return 1;
    if(d[x] != 0) return d[x]; //동일한 값을 구할 필요 없이

    return d[x] = dp(x - 1) + dp(x - 2);
}

int main(void){
    printf("%d ", dp(30));

    return 0;
}
