#include <stdio.h>
#include <locale.h>

 int main(void){

    int valor, quant, resto;
      
        printf("Digite um valor inteiro em reais: ");
        scanf("%d", &valor);

        quant = valor / 100;
        resto = valor % 100;
        printf("%d notas de 100\n", quant);    

        valor = resto;
        quant = valor / 50;
        resto = valor % 50;
        printf("%d notas de 50\n", quant);

        valor = resto;
        quant = valor / 20;
        resto = valor % 20;
        printf("%d notas de 20\n", quant);
        
        valor = resto;
        quant = valor / 10;
        resto = valor % 10;
        printf("%d notas de 10\n", quant);

        valor = resto;
        quant = valor / 5;
        resto = valor % 5;
        printf("%d notas de 5\n", quant); 
return(0);
}