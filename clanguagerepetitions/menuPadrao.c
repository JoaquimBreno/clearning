// Function Menu With Activities
// Generated by;
// Joaquim Breno
// “Programs must be written for people to read, and only incidentally for machines to execute.”
//― Harold Abelson


#include <stdio.h>
#include <locale.h>
#include <time.h>

void Default();
void Quest1();
void Quest2(); 
void Quest3();

int main(){
    int opcao;
    print: 
    setlocale(LC_ALL, "portuguese-brazilian");
    printf("DIGITE UMA ALTERNATIVA PARA ACESSAR:\n");
    printf("1) Questão 1\n");
    printf("2) Questão 2\n");
    printf("3) Questão 3\n");
    printf("0) Sair\n");
    scanf("%d", &opcao);
    system("clear");

    switch (opcao){
    case 0:
        printf("Até a próxima!\n");
        return(0);
    case 1:
        Quest1();
        break;
    case 2:
        Quest2();
        break;
    case 3:
        Quest3();
        break;
    default: 
        Default();
        system("clear");
        goto print;
    }
}

void Default(){
   printf("Digitaste um caractere errado.\n"); 
   sleep(2);
   return;
}
void Quest1(){
    int v; /* crio uma variável inteira para armazenar os valores que deverão aparecer na tela*/
    for(v=20; v>=2; v=v-2){ /* o for indica inicial mente que a variável v é igual a vinte, a varíavel v vai ser subtraída por 2 a cada loop do for */
    printf("%d\n", v);}  /* a cada loop vai aparecer o que tem dentro da variável v nesse printf e, quando v=2, será exibido o valor de v pela última vez*/
    return;/*fecha a função */
    
}
void Quest2(){
    /** Letra a) */
// #include <stdio.h>  /** importo uma library */
// int main(void){  /** inicio uma função */
// char letra;   /** cria uma variável do tipo char para guardar o valor inteiro de um caractere, o for é usado em baixo por ser mais curto do que outros laços de repetição*/
// for(letra = 'a'; letra <= 'b'; letra++){    /** o for inicia com uma intrução de que a variável letra é igual a a, como a variável letra armazena um inteiro para cada charactere*, enquanto a condição do for é satisfeita "a<=b", soma mais um inteiro ao inteiro que representa a, até esse se igualar ao inteiro de b e fechar o loop for.*/
// printf("%c", letra);  /** apresenta a saída de cada valor que está dentro de letra*/
// }
// return 0;  /** fecha a função */
// }


/** Letra b) */
    char letra; /** cria uma variável char para guardar caracteres Dec criados para o inteiro a */
    int lMaior, lMenor;  /**  crio duas variáveis inteiras para guardar o inteiro Dec que irá gerar um charactere na variável letra */

    for(lMaior=65; lMaior<=90; lMaior++){ /** mando o programa adicionar +1 para representar o próximo caractere maiúsculo na variável letra*/
        /** enquanto lMaior for menor e igual a 90, que representa Z, vai somar mais um */
        if(lMaior== 65 || lMaior==69 || lMaior==73 || lMaior==79 || lMaior==85){ /* quando a letra maiúscula for vogal, expressa por esses seguintes números, será executado o que vem abaixo*/
            lMenor= lMaior + 32; /* percebia que a diferença entre os valores inteiros dos números maiúsculos e minúsculos é 32*/
            letra= lMenor; /* logo, irei exibir o caractere que representa o valor da vogal minúscula*/
            printf("%c", letra); /* ressaltando que, ao utilizar a tabela ASCII, eu encontro os valores inteiros de cada letra*/
        }
        else{ /* caso a condição dos números não serem aquelas que representei no if, ou seja, as consoantes, executo o que vem abaixo*/
            letra= lMaior; /* letra char vai ser exibida de acordo com o valor exato que é determinado pelo for, esse valor será sempre consoante e maiúsculo*/
            printf("%c", letra); /* exibe a letra*/
        }
     
    }

    return; /*fecha a função*/
}
void Quest3(){

        int n; /** identidico a variável n como inteiro que abaixo usarei como limitante de loops no for */
    float nota1, nota2, uniAtual, uniAnterior, media; /* nota1 e nota2 armazenarão os valores das notas em cada loop, uniAtual será a nota unitária de cada loop, uniAnterior receberá o valor do uniAtual do segundo loop e media será usada tanto para armazenar o valor do uniAtual do terceiro loop quanto para armazenar a media, todos em float*/
    char conceito;/*criei uma char para guardar o caractere do conceito*/

    const float n1 = 6, n2 = 4;/*configuro as constantes que serão os pesos na média ponderada*/

    uniAnterior=0;/*mostro para o programa que inicialmente uniAnterior vale 0*/
    for(n=1; n<=3; n++){/*inicio a sequência de loops, iniciada no valor 1, seguido de 2, até 3, quando finaliza*/
        printf("Irei calcular as notas unitárias. Digite a primeira nota e a segunda nota:\n");
        scanf("%f", &nota1);/*mando digitar a primeira nota*/ 
        scanf("%f", &nota2);/*mando digitar a segunda nota*/ 
            if(nota1>=nota2){
                uniAtual=((nota1 * n1)+(nota2 * n2))/(n1+n2);/*calculo a media ponderada levando em consideração que a primeira é maior que a segunda*/
            }
            else{
                uniAtual=((nota2 * n1)+(nota1 * n2))/(n1+n2);/*calculo a media ponderada levando em consideração que a segunda é maior que a primeira*/
            }


            if(n==3){/*no 3° loop armazeno em media a media aritmetica entre as 3 notas unitárias*/
                media=(media+uniAnterior+uniAtual)/3;/*o valor de media referente ao primeiro loop entra no cálculo*/
            }
            else if(n==2){/*no 2° loop armazeno em uniAnterior o valor do UniAtual desse referente loop*/
                uniAnterior = uniAtual;
            }
            else{/*no 1° loop armazeno em media o valor do UniAtual desse referente loop*/
                media = uniAtual;
            }

            printf("A %d° nota unitária é: %.1f\n", n, uniAtual); /** mostro tanto a nota unitária de cada loop quanto a sua classificação */
    }

        if(media<5){/** se media menor que 5, conceito F */
            conceito = 'F';
        }
        else if(media<6){/** se conceito menor que 6 e maior igual que 5, conceito E */
            conceito = 'E';
        }
        else if(media<7){/** se conceito menor que 7 e maior igual que 6, conceito D */
            conceito = 'D';
        }
        else if(media<8){/** se conceito menor que 8 e maior igual que 7, conceito C */
            conceito = 'C';
        }
        else if(media<9){/** se conceito menor que 9 e maior igual que 8, conceito B */
            conceito = 'B';
        }    
        else{/** se conceito menor que infinito e maior igual que 9, conceito A*/
            conceito = 'A';
        }

    printf("A media é: %.1f, conceito: %c\n", media, conceito);/** exibo a media entre todas as notas unitarias e seu respectivo conceito */

    return;/*adios muchacho*/
}