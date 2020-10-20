#include <stdio.h>
#include <string.h>

#define LENGTH 22

int main(void){
    int i, lines;
    char position, *obi= "OBI", *uri= "URI";
    scanf("%d%*c", &lines);

    char text[lines][LENGTH];

    for(i = 0; i < lines; i++){
        fgets(text[i], LENGTH, stdin);
    }
   
    for(i = 0; i < lines; i++){
         position = strstr(text[i], obi);
         printf("%d", position);
    }    

    return 0;
}