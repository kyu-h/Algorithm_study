#include <stdio.h>

int num = 4;
int INF = 1000000000;

//자료 배열을 초기화
int a[4][4] = {
    {
        0, 5, INF, 8
    },
    {
        7, 0 ,9, INF
    },
    {
        2, INF, 0, 4
    },
    {
        INF, INF, 3, 0
    }
};

void floydWarshall() {
    int d[num][num];

    for(int i=0; i< num; i++){
        for(int j=0; j<num; j++){
            d[i][j] = a[i][j];
        }
    }

    //k=거쳐가는 노드
    for(int k=0; k<num; k++){
        //i=출발노드
        for(int i=0; i<num; i++){
            for(int j=0; j<num; j++){
                if(d[i][k] + d[k][j] <d[i][j]){
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            printf("%3d", d[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    floydWarshall();
}
