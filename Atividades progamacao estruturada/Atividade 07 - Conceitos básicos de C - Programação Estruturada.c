#include <stdio.h>

/////////////////////////////Questão 1

char c = 'a';
char *pc;

pc = &c;

///////////////A

printf("Endereço de c: %p\n", c);             /// endereço de c 
printf("Valor guardado em c: %c\n", c);       ///valor guardado por c
printf("-------------------\n");

//////////////B

printf("Valor guardado em pc: %d\n", pc);                         ///valor guardado por pc
printf("Valor guardado onde pc está apontando: %c\n", *pc);       ///valor guardado onde aponta 
printf("-------------------\n");

//////////////C

printf("Endereço de pc: %p.", pc);     /// endereço de pc


return 0;
    
/////////////////////////////Questão 2

int n1 = 10, *i;
float n2 = 30.50, *f;
char caracter = 'a', *c;

i = &n1;
f = &n2;
c = &caracter;

printf("Valores apontados por seus ponteiros inicialmente: \n");
printf("Inteiro = %i\n", *i);
printf("Real = %.2f\n", *f);
printf("Caractere = %c\n", *c);
printf("----------------------\n");

*i = 34;
*f = 10.34;
*c = 'b';

printf("Valores alterados apontados por seus ponteiros: \n");
printf("Inteiro = %i\n", *i);
printf("Real = %.2f\n", *f);
printf("Caractere = %c\n", *c);

return 0;

/////////////////////////////Questão 3

int n1, n2;

printf("Informe o primeiro valor inteiro: ");
scanf("%i", &n1);

printf("Informe o segundo valor inteiro: ");
scanf("%i", &n2);

printf("O endereço do primeiro valor é: %p\n", n1);
printf("O endereço do segundo valor é: %p", n2);

return 0;

/////////////////////////////Questão 4

void valores(int *a, int *b)
{

int trocado = *a;
*a = *b;
*b = trocado;


}

int main()
{
    
int n1, n2;

printf("Informe o primeiro valor inteiro: ");
scanf("%i", &n1);

printf("Informe o segundo valor inteiro: ");
scanf("%i", &n2);

printf("Valores originais: A = %d e B = %d.\n", n1, n2);

valores(&n1, &n2);

printf("Valores trocados: A = %d e B = %d.", n1, n2);

return 0;

}

/////////////////////////////Questão 5

int somaDobro(int *a, int *b)
{

*a = (*a) * 2;
*b = (*b) * 2;

return (*a + *b);

}

int main()
{

int n1, n2, resultado;

printf("Informe o primeiro valor inteiro: ");
scanf("%i", &n1);

printf("Informe o segundo valor inteiro: ");
scanf("%i", &n2);

resultado = somaDobro(&n1, &n2);

printf("A soma do dobro dos dois valores é: %i\n", resultado);
printf("-----------------------------------\n");
printf("O dobro do primeiro valor é: %i\n", n1);
printf("O dobro do segundo valor é: %i", n2);

return 0;

}
