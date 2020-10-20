#include <stdio.h>


int main(void){
    int N, i;
    int result=0, nMaior;

    scanf("%d", &N);
    int sheep[N+1];

    for(i = 1; i <= N; i++){
        scanf("%d", &sheep[i]);
    }
    nMaior=sheep[i];
    for(i = 1; i <= 100000; i++){
        if(i>=nMaior){
        nMaior=i;
        }
        if(sheep[i]%2 != 0){
            sheep[i]--;
        }
        else{
            sheep[i]--;
            i=i-2;
        }
        if(sheep[i]==0) break;
    }
    for(i = 1; i <= N; i++){
        result += sheep[i];
    }

    printf("%d %d\n", nMaior, result);

    return 0;
}