#include <stdio.h>

int d[31];

int dp(int num){
    if(num == 0) return 1;
    if(num == 1) return 0;
    if(num == 2) return 3;
    if(d[num] != 0) return d[num];
    int result = 3*dp(num - 2);
    for(int i=3; i<=num; i++){
        if(i%2==0){
            result += 2 * dp(num - i);
        }
    }

    return d[num] = result;
}

int main(void){
    int a;
    scanf("%d", &a);
    printf("%d", dp(a));
    return 0;
}
