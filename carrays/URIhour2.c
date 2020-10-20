#include <stdio.h>


int main(void){
    int i, n;    
    scanf("%d", &n);
    int spot[n];

    for(i = 0; i<n; i++){
        scanf("%d", &spot[i]);
    }

    int nMinor=spot[0], pMinor=0;
    for(i=0; i<n; i++){
        if(spot[i]<nMinor){
            nMinor=spot[i];
            pMinor=i;
        }
    }    

    printf("Menor valor: %d\n", nMinor);
    printf("Posicao: %d\n", pMinor);

    return 0;
}