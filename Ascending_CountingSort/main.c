#include <stdio.h>

int main(){
    int n=0,counts[10001]={0,},input=0;

    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%d",&input);
        counts[input]++;
    }
    for(int i=1; i<=10000; i++)
        counts[i] = counts[i] + counts[i-1];

    for(int i=1; i<=10000; i++){
        int index = counts[i]-counts[i-1];
        if(i==1){
            index = counts[i];
        }
        while(index--){
            printf("%d\n",i);
        }
    }
    return 0;
}
