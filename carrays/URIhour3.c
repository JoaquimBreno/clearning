#include <stdio.h>

#define MAX_NUMERO 2000

int main(void){
    int count[MAX_NUMERO] = {0};    
    int n, x, i;
    
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        count[x-1]++;
    }

    for(i = 0; i<2000; i++){
        if(count[i]!=0){
        printf("%d aparece %d vez(es)\n", i+1, count[i]);
        }
    }

    return 0;
}