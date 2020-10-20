#include <stdio.h>
#include <string.h>

#define NMAX 6
#define LINE 1000

int Compare(char *previus, char *posterior){

     return strcmp(previus, posterior);

}

int main(void){
    int caseTest, i, ordenado=0;
    char str1[LINE][NMAX];
    char aux[LINE][NMAX];

    while(scanf("%d%*c", &caseTest)!=EOF){
        if(caseTest==EOF) break;
        

        for(i = 0; i < caseTest; i++){
            fgets(str1[i], 6, stdin);    
        }

        while(!ordenado){
            
            ordenado=1;

            for(i = 0; i < caseTest-1; i++){
               
                if(Compare(str1[i], str1[i+1])>0){

                    strcpy(aux[i], str1[i]);
                    strcpy(str1[i], str1[i+1]);
                    strcpy(str1[i+1], aux[i]);

                    ordenado=0;
                }
            }
         
        }

        ordenado=0;

        for(i = 0; i < caseTest; i++){
            printf(str1[i]);
        }   

    }
    return 0;
}