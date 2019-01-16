#include <stdio.h>

int main(){
    int M, N;
    int i = 0;
    int num = 0;
    int min = 0;
    int k = 0;

    scanf("%d%d", &M, &N);

    if(M > 10000 || M < 1 || N > 10000 || N < 1 || M > N)
        return 0;

    for(;M < N; M++){
        for(i=2; i<M; i++){
            if(M % i == 0){
                break;
            }
        }

        if(M == i){
            k++;
            printf("%d\n", M);
            num += M;

            if(k == 1){
                min = M;
            }
        }
    }

    if(k == 0){
        printf("-1\n");
    }else {
        printf("%d\n%d\n", num, min);
    }

    return 0;
}
