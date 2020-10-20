#include <stdio.h>
#include <string.h>


int main(void){
    char laugh[51];
    char laughInvert[51]= {0};
    char laughorigin[51]= {0};
    int i, n, count, count2=0, vowel=0;
    size_t size;

    scanf("%s", &laugh);
    size = strlen(laugh);


        for(i=size-1, n = 0; i!=-1; i--, n++){
            if(laugh[i]== 'a' || laugh[i]=='e' || laugh[i]=='i' || laugh[i]=='o' || laugh[i]=='u'){
                laughInvert[n]=laugh[i];
                vowel++;
            }
        }

        for(i=0, count=-1 ; i<size; i++){
            if(laugh[i]== 'a' || laugh[i]=='e' || laugh[i]=='i' || laugh[i]=='o' || laugh[i]=='u'){
                count++;
                laughorigin[count]=laugh[i];
            }

        }
        
        for(i=0, count=-1 ; i<size; i++){
            if(laughInvert[i]== 'a' || laughInvert[i]=='e' || laughInvert[i]=='i' || laughInvert[i]=='o' || laughInvert[i]=='u'){
                count++;
                laugh[count]=laughInvert[i];
            }
        }

     
        for(n = 0; n<size; n++){
                if(laugh[n] == laughorigin[n]){
                    count2++;
                }
        }
       
        if(vowel==count2){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    return 0;
}