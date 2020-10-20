#include <stdio.h>
#include <locale.h>
#include <math.h>

float Delta(float a, float b, float c){
    float Delta = b*b-4*(a*c);
    return Delta;
}
float rootx1(float delta, float a, float b){
        float x1 = (-b + sqrt(delta))/(2*a);
        printf("A primeira raiz é %.1f, e a segunda é \n", b);
        return x1;
}
float rootx2(float delta, float a, float b){
        float x2 = (-b + sqrt(delta))/(2*a);
        return x2;
}

int main(void){

    float a, b, c;
    float delta, x1, x2;


        printf("Digite o coeficiente a:");
        scanf("%f", &a);
        printf("Digite o coeficiente b:"); 
        scanf("%f", &b);
        printf("Digite o coeficiente c:");
        scanf("%f", &c);
            if (a == 0) {
                printf("Isso não é uma equação do segundo grau!");
                return (1);
            }
            else{
                delta=Delta(a, b, c);

                if( delta >= 0 ){
                    x1 = rootx1(delta, a, b);
                    x2 = rootx2(delta, a, b);
                    printf("A primeira raiz é %.1f, e a segunda é %.1f\n", x1 , x2);
                    return (0);
                }
                else{
                    printf("Essa equação não tem resultados reais, o delta é %.2f\n", delta); 
                    return (2);
                }
            }
}