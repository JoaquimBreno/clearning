#include <stdio.h>
#include <math.h>

int main (void){

    int t, k, n, m, i, pi, pp, psoma;
    double m1;
    scanf("%d", &t);

    for(i=1; i<=t; i++){
        psoma = 0;
        scanf("%d%d", &n, &m);
        k = 1;
            for(pi=0; pi!=n; pi++){
                
                scanf("%d", &pp);
                psoma += pp;
                if(psoma>m){
                    psoma = n;
                    k++;
                }
                
            
        }

        printf("%d\n", k);
    }

return 0;
}