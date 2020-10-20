#include <stdio.h>
#include <math.h>
#include <locale.h>

float Delta(float a, float b, float c){
    return (b*b)-(4*a*c);
}

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){
    if(a==0){
        return -1;
    }
    else{
        float delta= Delta(a, b, c);
        if(delta < 0){
            return -2;
        }

        *x1= (-b+sqrt(delta))/2*a;
        *x2= (-b-sqrt(delta))/2*a;     
        return 0;   
    }

}


int main(void){
    float a, b, c, r1, r2;
    int resultado;

    setlocale(LC_ALL, "portuguese-brazilian");

    printf("Digite os coeficientes:");
    scanf("%f %f %f", &a, &b, &c);

    
    switch (ResolveEquacao2Grau(a, b, c, &r1, &r2)){
    case -1:
        printf("\nIsso não é uma equação quadrática");
        break;
    case -2:
        printf("\nAs raízes dessa equação quadrática não são reais");
        break;
    case 0:
        printf("\nAs raízes são r1= %.2f, r1 %.2f\n", r1, r2);
        break;
    }


    return 0;
}