/**OldReader
 * Um leitor de idade inteligente
 * Exibirei a sua faixa etária
 * Generated by;
 * Joaquim Breno
 */

#include <stdio.h>
#include <locale.h>

int main(void){

    int old;
/**Entrada de idade*/
    printf("Olá! Meu nome é Kodi, seu matemático digital, siga meus passos e seu resultado será um sucesso!\n");
 print:{
    printf("Qual a sua idade?\n");
    scanf("%d", &old);
/**Solicitação da faixa etária */
    if( old >= 0 && old <= 19 ){
        printf("Oi jovem! Você é jovem. Jovem, segundo a faixa etária brasileira você é jovem.\n");
    return(0);
    }
    if( old > 19 && old <= 59 ){
        printf("Oi Adulto! Quantas responsabilidades! Adulto, segundo a faixa etária brasileira você é Adulto.\n");
    return(0);
    }
    if( old > 59 ){
        printf("Oi, então você está na terceira idade? Segundo a faixa etária brasileira você é idoso. Paulinha disse que sexta tem forró dos véi, bora?\n");
    return(0);
    }
    else
    {
        printf("\n\nOxe, meu consagradx, tua idade é negativa é?\n\n");
        goto print; /**Retorna a função */
    }
}
}