#include <stdio.h>

/////////////////////////////Questão 1

int somatorio(int N)
{
    if (N == 1)
    {
        return 1;
    }else
        {
            return N + somatorio(N-1);
        }
}

int main()
{
    int n1;

    printf("Digite um número inteiro: ");
    scanf("%i", &n1);

    if (n1 < 0) 
    {
        printf("O número fornecido não é positivo.\n");

        return 1;
    }  

    int resultado = somatorio(n1);

    printf("O somatório dos número de 1 a %i é: %i.", n1, resultado);

    return 0;
}

/////////////////////////////Questão 2

int fatorial(int N)
{
    if (N == 0)
    {
        return 1;
    }else
        {
            return N * fatorial(N-1);
        }      
}

int main()
{
    int n1;

    printf("Digite um número inteiro: ");
    scanf("%i", &n1);

    int resultado = fatorial(n1);

    printf("O fatorial do número %i é: %i", n1, resultado);

    return 0;
}

/////////////////////////////Questão 3

int fibo(int N)
{
    if (N == 0 || N == 1)
    {
        return N;
    }else
        {
            return fibo(N-1) + fibo(N-2);
        } 
}

int main()
{
    int n1;

    printf("Digite o valor de N para calcular o N-ésimo termo da sequência de Fibonacci: ");
    scanf("%i", &n1);

    if (n1 < 0) 
    {
        printf("O número fornecido não é positivo. Forneça um número positivo.\n");

        return 1;
    }  

    int resultado = fibo(n1);

    printf("O %i-ésimo termo da sequência de Fibonacci é: %i.", n1, resultado);

    return 0;
}

/////////////////////////////Questão 4

void imprimir(int N)
{
    if(N == 0)
    {
        printf("%i\n", N);

        return;
    }
        
    imprimir(N-1);       //Ordem crescente
    printf("%i\n", N);
}

int main()
{
    int n1;

    printf("Digite um número inteiro positvo: ");
    scanf("%i", &n1);

    if (n1 < 0) 
    {
        printf("O número fornecido não é positivo. Forneça um número positivo.");

        return 1;
    }  

    printf("Os números naturais de 0 até %i em ordem crescente são: \n", n1);

    imprimir(n1);

    return 0;
}

/////////////////////////////Questão 5

void imprimir(int N)
{
    if(N == 0)
    {
        printf("%i\n", N);

        return;
    }
        
    printf("%i\n", N);   //Ordem decrescente
    imprimir(N-1);
}

int main()
{
    int n1;

    printf("Digite um número inteiro positvo: ");
    scanf("%i", &n1);

    if (n1 < 0) 
    {
        printf("O número fornecido não é positivo. Forneça um número positivo.");

        return 1;
    }  

    printf("Os números naturais de 0 até %i em ordem decrescente são: \n", n1);

    imprimir(n1);

    return 0;
}

