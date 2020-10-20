#include <stdio.h>

int main (void){
    int o = 0, p, q, r, s;
    printf("valores: ");
    scanf("%d %d", &r, &s);

    ((p = r)>(q = s))?(p = s, q = r) : 0;
        while((p <= q)&&(o += p++));
            printf("resposta: %d\n", o);

return 0;
}