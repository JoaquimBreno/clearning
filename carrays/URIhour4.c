#include <stdio.h>

#define M_MAX 10000

int main(void){
    int N, M, i, i2, n, count=0;

    do{
        scanf("%d %d", &N, &M);
        if(N!=0 && M!=0){
            int spot[N], nTest[M_MAX] = {0};

            i2=0;
            for( i = 0; i < N; i++){
                spot[i]=i2++;
            }
            for( i = 0; i < M; i++){
                scanf("%d", &n);
                nTest[n]++;
                if( nTest[n]>1 && nTest[n]<=2){
                    count++;
                }
            }

            printf("%d\n", count);
            count=0;
        }
    }while(N!=0 && M!=0);

}