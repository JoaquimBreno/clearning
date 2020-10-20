#include <stdio.h>
#include <string.h>
int main(void){
char nomes[10][6];
int i, n, ordenado;
for (i = 0; i < 4; i++){
fgets(nomes[i], 6, stdin);
} 
puts("Resultado:");
for (i = 0; i < 6; i++){
printf("%c", nomes[0][i]);
}
return 0;
}