/**
 ============================================================================
 Nome      : q3-completarFuncoes.c
 Autor     : lincoln
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : Exercicio para completar com definicoes de funcoes.
 ============================================================================
 */
#include <stdio.h>

/****
* SomaAteN(): Calcula a soma de todos valores de 0 ate n.
*
* Parametros:
*    n (entrada): o valor do numero natural n, ate onde a soma sera feita.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               -1 (menos 1):   quando o parametro n nao for um natural.
*               valor natural:  valor da soma ate n quando n for natural.
****/
/* IMPLEMENTE AQUI A FUNCAO SomaAteN DE ACORDO COM A DESCRICAO */
int SomaAteN(int n){ /* Comentário de Joaquim: crio uma função inteira para receber os valores dos returns */
    int i, soma = 0; /* crio um inteiro para armazenar o valor de cada número entre 1 e n, e soma guardará a soma entre estes termos */
    if(n<=0){ /* se n não for natural retorna -1 */
        return -1;
    }
    else{ /* senão, começa a contagem */
        for (i = 1; i <= n; i++){
           soma = soma+i;
        }
        return soma;
    }
}

/****
* Fatorial(): Calcula o fatorial de um natural n.
*
* Parametros:
*    n (entrada): o valor do numero natural n.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               -1 (menos 1):   quando o parametro n nao for um natural.
*               valor natural:  valor de n! quando n for natural.
****/
/* IMPLEMENTE AQUI A FUNCAO Fatorial DE ACORDO COM A DESCRICAO */
int Fatorial(int n){ /* Comentário de Joaquim: crio uma função inteira para receber os valores dos returns */
    int i, produto = 1; /* crio um inteiro para armazenar o valor de cada número entre 1 e n, e produto guardará o produto entre estes termos */
    if(n<0){ /* se n não for natural retorna -1 */
        return -1;
    }
    else{ /* senão, começa a contagem */
        for(i = 1 ; i <= n; i++){
            produto = produto * i;
        }
        return produto;
    }
}

/****
* EhPar(): Indica se um valor inteiro eh par ou impar.
*
* Parametros:
*    x (entrada): o valor de um inteiro x.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               1 (verdadeiro): quando x for par.
*               0 (falso):      quando x for impar.
****/
/* IMPLEMENTE AQUI A FUNCAO EhPar DE ACORDO COM A DESCRICAO */
int EhPar(int n){ /* Comentário de Joaquim: essa função receberá um valor inteiro verdadeiro ou falso após as condições*/
    int resto; /* Criada uma variável resto para guardar o valor do resto da divisão de n por 2 */
    resto = n%2;
    if(resto==0){ /* Se o resto for 0 retornará verdadeiro, é par */
        return 1;
    }
    else{ /* Senão, retorna 0, falso */
        return 0;
    }
}
/****
* EhDivisivel(): Indica se um numero eh divisivel por outro.
*
* Parametros:
*    a (entrada): um valor inteiro.
*    b (entrada): um valor inteiro.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               1 (verdadeiro): quando a for divisivel por b.
*               0 (falso):      quando a NAO for divisivel por b.
****/
/* IMPLEMENTE AQUI A FUNCAO EhDivisivel DE ACORDO COM A DESCRICAO */
int EhDivisivel(int n, int i){/* Comentário de Joaquim: essa função receberá um valor inteiro verdadeiro ou falso após as condições*/
    int resto; /* Criada uma variável resto para guardar o valor do resto da divisão de n por i */
    resto = n % i;
    if(resto==0){/* Se o resto for 0 retornará verdadeiro, é divisível */
        return 1;
    }
    else{ /* Senão, retorna 0, falso */
        return 0;
    }
}

int main(void) {
    int n, soma, i;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    soma = SomaAteN(n);
    printf("A soma de 1 ateh N eh: %d\n", soma);

    printf("%d! = %d\n", n, Fatorial(n));
    if (EhPar(n)){
        printf("%d eh par\n", n);
    }else{
        printf("%d eh impar\n", n);
    }

    for (i = 2; i <= 15; i++){
        if (EhDivisivel(n, i)){
            printf("%d eh divisivel por %d\n", n, i);
        }else{
            printf("%d nao eh divisivel por %d\n", n, i);
        }
    }

	return 0;
}