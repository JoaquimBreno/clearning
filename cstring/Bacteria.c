#include <stdio.h>
#include <string.h>

#define NMAX 101

int main(void){
    char Dna1[NMAX], Dna2[NMAX];

    while(scanf("%s", Dna1) !=EOF){
        scanf("%s", Dna2);
        if(strstr(Dna1, Dna2)){
            printf("Resistente\n");
        }
        else{
            printf("Nao resistente\n");
        }
    }

    return 0;
}