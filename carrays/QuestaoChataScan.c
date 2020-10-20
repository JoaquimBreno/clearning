#include <stdio.h>

int main(void){
    int naMosca[10];
    int i, i2=9;
    for (i = 0; i < 10; i++){
        scanf("%d", &naMosca[i]);    
    }
    
    for(i = 0; i < 10; i++){
        printf("Em ordem crescente = %d\n", naMosca[i]);
        printf("\t Em ordem decrescente = %d\n", naMosca[i2]); 
        i2>0? i2--: i2==0; 
    }

    printf("\nEsse é o quinto termo: %d\n\n", naMosca[4]);
    i=-1;

    while(i++ < 9){
        naMosca[i]%2 == 0 ? printf("\t %d é par\n\n", naMosca[i]) : 0;
        i2+=naMosca[i]; /** Aproveito que i2 se tornou 0 pra usar ele como variável soma */
    }

    printf("Soma de valores da array e: %d\n", i2);

    return 0;
}