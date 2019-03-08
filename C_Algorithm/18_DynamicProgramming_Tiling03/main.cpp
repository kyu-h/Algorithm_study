#include <stdio.h>

int d[1000001][2];

int dp(int x){
    if(x == 0) return 1;
    if(x == 1) return 2;
    if(x == 2) return 7;
    if(d[x] != 0) return d[x];
    int result = 2*dp(x-1) + 3*dp(x-2);
    for(int i=3; i <= x; i++){
        result += (2*dp(x-i))% 1000000007;
    }

    return d[x] = result % 1000000007;
}

int main(void){
    int num;
    scanf("%d", &num);
    printf("%d", dp(num));
    return 0;
}
