#include <stdio.h>
#include <locale.h>

int MaximoValorArray(int naMosca[]){
    int nMaior=0, i;
    for(i=0; i<10; i++){
        if(naMosca[i]>nMaior){
            nMaior=naMosca[1];
        }
    }
    return nMaior;
}

double Media(int i2){
    return i2/10;
}

int EmArray(int naMosca[], int booleanVar){
    int i;
    for(i=0; i<10; i++){
        if(booleanVar == naMosca[i]){
            return 1;
        }
    }
    return 0;
}

int main(void){
    int naMosca[10];
    int i, i2=9, booleanVar;
    setlocale(LC_ALL, "portuguese-brazilian");

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
    printf("A média dos valores é : %.2lf\n", Media(i2));

    for (i = 0; i < 10; i++){
        scanf("%d", &booleanVar);
        if(EmArray(naMosca, booleanVar)){
            printf("Felizmente, %d, existe na array\n", booleanVar);
        }    
        else{
            printf("Infelizmente, %d, não existe na array\n", booleanVar);
        }
    }

    printf("\nO número máximo é %d\n", MaximoValorArray(naMosca));

    return 0;
}