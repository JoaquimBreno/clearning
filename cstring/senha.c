#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main(void) {
 int i, tamanho, letra_minuscula, letra_maiuscula, numero, aux;
 char Senha[34];

 while(scanf("%[^\n]", Senha) != EOF){
    getchar();
    printf("%s\n", Senha);
    letra_maiuscula = 0;
    letra_minuscula = 0;
    numero = 0;
    i = 0;
    aux = 0;
    tamanho = strlen(Senha);
    while(Senha[i] != '\0') {
        if(Senha[i]>= 'A' && Senha[i]<= 'Z') {
            letra_maiuscula++;
            
        }
        else if(Senha[i]>= 'a' && Senha[i]<= 'z') {
            letra_minuscula++;
        }
        else if(Senha[i] >= '0' && Senha[i] <= '9') {
            numero++;
        }
        else if(Senha[i] == ' ') {
            aux = 1;
            break;
        }
        else if((Senha[i] >= '!' && Senha[i] <= '/') || (Senha[i] >= ':' && Senha[i] <= '@') || (Senha[i] >= '[' && Senha[i] <= '`') || (Senha[i] >= '{' && Senha[i] <= 255) || (Senha[i]== '`')) {
            aux = 1;
            break;
        }
        i++;
    } 

    if((tamanho >= 6) && (tamanho <= 32)) {
        if((letra_maiuscula >= 1) && (letra_minuscula >= 1) && (numero >= 1) && aux == 0) {
            printf("Senha valida.\n"); 
        } 
        else {
            printf("Senha invalida.\n");
        }
    }
    else {
        printf("Senha invalida.\n");
    }
 }
 
 return 0;
}
 