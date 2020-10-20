#include <stdio.h>

#define N_MAX 61

int main(void){
    int qRight[N_MAX], qLeft[N_MAX];
    int caseTest, size, i, split, result=0; 
    char side;
    while(scanf("%d", &caseTest) != EOF){

            for(i = 30; i <= 60; i++){
                qRight[i] = qLeft[i] = 0;
            }

            while(caseTest--){
                scanf("%d %c", &size, &side);
                if (side == 'D')
                    qRight[size]++;
                else 
                    qLeft[size]++;
            }

             for(i = 30; i <= 60; i++){
                if(qRight[i]>0 && qLeft[i]>0){
                split =0;
                    if(qRight[i]<=qLeft[i])
                        split= qRight[i];
                    if(qLeft[i]<=qRight[i])
                        split= qLeft[i];
                result += split;
                }  
            }
        printf("%d\n", result);
        result=0;
    }

    return 0;
}