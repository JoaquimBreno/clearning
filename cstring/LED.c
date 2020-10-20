#include <stdio.h>
#include <string.h>



int main(void){
    char str[100];
    int i, n, size, count;
    scanf("%d", &n);

    while(n--){
    scanf("%s", &str);
        size= strlen(str);

        for(i = 0, count = 0; i < size; i++){
            if(str[i]=='0'  || str[i]=='9' || str[i]=='6'){
                count+=6;
            }
            else if(str[i]=='2'  || str[i]=='3' || str[i]=='5'){
                count+=5;
            }
            else if(str[i]=='4'){
                count+=4;
            }
            else if(str[i]=='7'){
                count+=3;
            }
            else if(str[i]=='1'){
                count+=2;
            }
            else if(str[i]=='8'){
                count+=7;
            }
        }

        printf("%d leds\n", count);
    }

}