#include <stdio.h>

int main(void){
    static int aoAvesso[20];
    int i, n;

    for(i=0; i<20; i++){
        scanf("%d", &aoAvesso[i]);
    }

    for(n=19; n>=0; n--){
        if(n==19){
            i=0;
        }
        else if(n>=0){
            i++;
        }
        
    printf("N[%d] = %d\n", i, aoAvesso[n]);
    }

    return 0;
}