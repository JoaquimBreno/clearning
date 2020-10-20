#include <stdio.h>

int Comparacao(int a, int b){ 
    if(a<b){ 
        return -1;
    }
    if(a==b){
        return 0;
    }
    if(a>b){ 
        return 1;
    }
} 


void Troque(int *a, int *b){  
    int aux=*a; 
    *a=*b; 
    *b=aux; 
} 

int main(void){
    int i, n, casoTeste;

    while(scanf("%d", &casoTeste)!=EOF){
        int days[casoTeste], difAnt=0, difAtual=0, correctComp=0,x;
        
        for(i = 0; i < casoTeste; i++){
            scanf("%d", &days[i]);
        }

        n=(casoTeste) - ((casoTeste)/2);

        if(casoTeste%2>0){
            while (correctComp!=casoTeste-1) {

                correctComp=0;
                
                for (i = 0; i < casoTeste-1; i++) { 

                    if ( Comparacao(days[i], days[i+1]) == 1 ) { 
                        Troque(&days[i], &days[i+1]);
                    }
                    else{ 
                        correctComp++; 
                    }
                }
            }

        
        x=casoTeste;
            for(i = 0; i < n; i++){
                x--;
                difAtual = days[i]-days[x];
                if(difAtual<0){
                    difAtual = -difAtual;
                }
                difAnt = difAtual+difAnt;
                
            }          

        
        }
        else{
            for(i = 0; i < n; i++){
                x--;
                difAtual = days[i]-days[i+2];
                if(difAtual<0){
                    difAtual = -difAtual;
                }
                difAnt = difAtual+difAnt;
            }    
        }
        printf("%d\n", difAnt);
    }
        
}
    

