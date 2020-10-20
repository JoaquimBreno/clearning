#include <stdio.h>

#define MAX_ESTRELAS 1000000

int main(void){
    int carneiros[MAX_ESTRELAS], visitada[MAX_ESTRELAS];
    int n, i;
    int estrelaAtual, proximaEstrela, maiorEstrela, resultado;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &carneiros[i]);
        visitada[i] = 0;
    }

    estrelaAtual = 0;

    while(estrelaAtual >= 0 && estrelaAtual < n){
        visitada[estrelaAtual] = 1;
        if (carneiros[estrelaAtual] % 2 == 0)
            proximaEstrela = estrelaAtual - 1;
        else
            proximaEstrela = estrelaAtual + 1;
        
        
        if (carneiros[estrelaAtual] > 0)
            carneiros[estrelaAtual]--;

        estrelaAtual = proximaEstrela;
    }

    for(i=0; i < n; i++){
        resultado=resultado+carneiros[i];
        if(visitada[i]=1){
            maiorEstrela=i;
        }
    }
    printf("%d %d\n", maiorEstrela, resultado);
    return 0;
}
