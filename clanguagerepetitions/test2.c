#include <stdio.h>
#include <math.h>
 
int main(void) {
    int t, n, m, i, pi, pp, psoma, k, porcent;
    double m1;
 
    scanf("%d", &t);
    porcent = t*0.9;
    for(i=1; i<=t; i++){
            
            psoma=0;
            scanf("%d %d", &n, &m);
            if(i>=porcent){
                if(n>=1 && n<=10000){
                    if(m>=1 && m<=1000){
                    for(pi=1; pi<=n; pi++){
                        scanf("%d", &pp);
                        if(pp>m){
                            return 0;
                        }
                        psoma = psoma + pp;
                    }
                    m1 = (double)psoma/m;
                    k= ceil(m1);
                    printf("%d\n", k);
                    }
                }
                else{
                    return 0;
                }
            }
            if(i<porcent){
                if(n>=1 && n<=10){
                    if(m>=1 && m<=1000){
                    for(pi=1; pi<=n; pi++){
                        scanf("%d", &pp);
                        if(pp>m){
                            return 0;
                        }
                        psoma = psoma + pp;
                    }
                    m1 = (double)psoma/m;
                    k= ceil(m1);
                    printf("%d\n", k);
                    }
                }
                else{
                    return 0;
                }
            }
    }

    return 0;
}