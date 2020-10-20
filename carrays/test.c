#include <stdio.h>

int Troca(int x, int y){
    int aux=x;
    x = y;
    y = aux;
}

int main(void){
    int x = 3, y = 5;

    printf(" antes  x=%d y=%d", x, y);
    Troca(x, y);
    printf(" depois  x=%d y=%d", x, y); 
}