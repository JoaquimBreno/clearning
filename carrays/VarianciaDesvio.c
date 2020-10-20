#include <stdio.h>
#include <math.h>


void mediaAlunos(double notasAlunos[], double *media){
    static int qtd;
    static double soma;
    soma+=notasAlunos[qtd];
    qtd++;
    *media = soma/qtd;

}

double Variancia(double notasAlunos[], double media, int n){
    int i;
    double soma1=0, unit;
        for(i=0; i<n; i++){
            unit= pow(notasAlunos[i]-media, 2);
            soma1+=unit;
        }
    
    return soma1/n;
}

double Desvio(double variancia){
    return sqrt(variancia);
}

int main(void){
    static double notasAlunos[50], media;
    double variancia, desvio;
    int i, n;

    printf("Digite o número de alunos:\n");
    scanf("%d", &n);
    printf("Digite a nota de cada aluno:\n");
    for(i=0; i<n; i++){
        scanf("%lf", &notasAlunos[i]);
        mediaAlunos(notasAlunos, &media);
    }
    
     variancia= Variancia(notasAlunos, media, n);
     desvio= Desvio(variancia);
     printf("A media foi %.2lf, a variancia foi: %.2lf e o desvio padrao foi: %.2lf\n", media, variancia, desvio);
}