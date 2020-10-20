#include <stdio.h>

void Troque(int *a, int *b){  
    int aux=*a; 
    *a=*b; 
    *b=aux; 
} 

int main(void){
    int i, casoTeste, x;

    while(scanf("%d", &casoTeste)!=EOF){
        int days[casoTeste], correctComp=0, difAtual=0;
        
        for(i = 0; i < casoTeste; i++){
            scanf("%d", &days[i]);
        }

            while (correctComp!=casoTeste-1) {

                correctComp=0;
                
                for (i = 0; i < casoTeste-1; i++) { 

                    if ( days[i] > days[i+1]){ 
                        Troque(&days[i], &days[i+1]);
                    }
                    else{ 
                        correctComp++; 
                    }
                }
            }
 
            for(i = 0, x=casoTeste-1; i < x; i++, x--){
                difAtual += days[x]-days[i];         
            }          

        printf("%d\n", difAtual);
        difAtual=0;
    }
    return 0;   
}