/**Circle Prompt
 * Calcular raio, perímetro e área de uma circunferência
 * Generated by;
 * Joaquim Breno
 */
#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese-brazilian");
    float d, p, a;
    const float PI = 3.141593;

    printf("Oi! Sou o Kodi, seu matemático digital, siga meus passos e seu resultado será um sucesso!\n");
    printf("Digite o valor do diâmetro da sua circunferência em cm:\n");
    scanf("%f", &d);
    printf("\033[0;35m O valor do diâmetro é: %.2f\n", d);

    /*aqui eu vou economizar variáveis e executar o raio na variável diâmetro*/
    d = d/2;
    printf("\033[0;34m O valor do raio é: %.2f\n", d);

    /*perímetro*/
    p = 2*PI*d;
    printf("\033[0;33m O valor do perímetro é: %.2f centímetros\n", p);

    /*área*/
    a = PI*d*d;
    printf("\033[0;32m O valor da área é %.2f centímetros quadrado\n", a);   
    
    return(0);
}