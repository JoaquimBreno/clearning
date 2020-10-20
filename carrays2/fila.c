#include <stdio.h>

void Troque(int *a, int *b){  
    int aux=*a; 
    *a=*b; 
    *b=aux; 
} 


int main(void){
    int i, casoTeste, correctComp=0, n, x, teste=0;  

    scanf("%d", &casoTeste);
        while(casoTeste--){
        int casoTeste2;
        scanf("%d", &casoTeste2);
        int aluno[casoTeste2], original[casoTeste2];

        for(i = 0; i < casoTeste2; i++){
            scanf("%d", &aluno[i]);
            original[i]=aluno[i];
        }
        
            while (correctComp!=casoTeste2-1) {

                correctComp=0;
                    
                for (i = 0; i < casoTeste2-1; i++) { 

                    if (aluno[i] > aluno[i+1]) { 
                        Troque(&aluno[i], &aluno[i+1]);
                    }
                    else{      
                        correctComp++; 
                    }
                }

                teste++;
            }

        
         x=0;
        for(i = casoTeste2-1, n = 0; i >= 0; i--, n++){
            if(teste==1){
                if(aluno[n]==original[n]){
                x++;
            }   
            }
            else if(aluno[i]==original[n]){
                x++;
            }
            printf("%d %d\n", original[n], aluno[i]);
        }

            printf("%d\n", x);
        }

    return 0;
}