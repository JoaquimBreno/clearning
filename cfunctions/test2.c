#include <stdio.h>


double AdicioneNaMedia(double valor){
    int qtd;
    double soma;
    soma+=valor;
    qtd++;
    return soma/qtd;
}


int main(void){
    int t, i;
    double a;

    printf("Digite a quantidade de testes:");
    scanf("%d", &t);

    for(i = 0; i < t; i++){
        printf("Digite um valor: ");
        scanf("%lf", &a);
        printf("Media atual: %.2lf\n", AdicioneNaMedia(a));
    }


    return 0;
}