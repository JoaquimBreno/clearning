/**Three Tree
 * A ideia desse código é 
 * definir qual dos três números nas entradas
 * tem o maior valor
 * Generated by:
 * Joaquim Breno 
 */
#include <stdio.h>
#include <locale.h>


int main(void){   
    int x1, x2, x3, nMaior, nMedio, nMenor;
    int xI1, xI2, x;
    setlocale(LC_ALL, "portuguese-brazilian");
    printf("Olá, meu nome é Kodi o seu matemático digital! Siga meus passos e seu resultado será um sucesso.\n");
    
    printf("Digite o primeiro valor:\n");
    scanf("%d", &x1);
    printf("Digite o segundo valor:\n");
    scanf("%d", &x2);
    printf("Digite o terceiro valor:\n");
    scanf("%d", &x3);

    if (x1 != x2 && x2 != x3 && x1 != x3){ 
        
        nMaior = x1;
        if (x2 > nMaior){
            nMenor = nMaior;
            nMaior = x2;
        }
        else{
            nMenor = x2;
        }
        if (x3 > nMaior){
            nMedio = nMaior;
            nMaior = x3;
        }
        if (x3 < nMenor){
            nMedio = nMenor;
            nMenor = x3;
        }
        if ( x3 < nMaior && x3 > nMenor ){
            nMedio = x3;
        }
    printf("O maior número é o número %d, o do meio é o número %d e o menor é o número %d.\n", nMaior, nMedio, nMenor);
    }

    else{
        xI1 = x1;
        if(x2 = xI1){
            xI2 = x2; 
            if( xI2 != x3 && xI2 > x3){
                printf("O número %d é igual ao número %d, os dois são maiores que o número %d\n", xI1, xI2, x3);
            }
            if( xI2 != x3 && xI2 < x3 ){
                printf("O número %d é maior que o número %d que é igual ao número %d\n", x3, x2, x1);
            }
            else{
                printf("Que falta de criatividade, na próxima vez digite números diferentes\n");
            }
        }    
    }
    
    return(0);
}
