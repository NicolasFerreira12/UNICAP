////////////////////////////////////////////Questão 1

int alunos = 5;
int aprovados;
float nota;

for (int i = 1; i <= alunos; i++)
{
    printf("Digite a nota do aluno %i: ", i);
    scanf("%f", &nota);

    if(nota >= 7)
    {
        aprovados++;
    }
}

printf("Número de alunos aprovados: %i", aprovados);

return 0;

////////////////////////////////////////////Questão 2



////////////////////////////////////////////Questão 3

int numero;

printf("Digite um número inteiro: ");
scanf("%i", &numero);

printf("Os divisores de %i são: \n", numero);

for (int i = 1; i <= numero; i++)
{
    if(numero % i == 0)
    {
        printf("%i\n", i);
    }
}

return 0;

////////////////////////////////////////////Questão 4

int pessoas = 5;
float altura, media, totalAlturas = 0;

for (int i = 1; i <= pessoas; i++)
{
    printf("Digite a altura da pessoa %i: ", i);
    scanf("%f", &altura);

    totalAlturas += altura;
}

media = totalAlturas / pessoas;

printf("A altura média das pessoas é: %.2f", media);

return 0;

////////////////////////////////////////////Questão 5

for (int i = 1; i <= 100; i++) 
{
    if (i % 3 == 0 && i % 5 == 0) 
    {
       printf("FizzBuzz\n");
    }else if (i % 3 == 0) 
        {
            printf("Fizz\n");
        }else if (i % 5 == 0) 
        {
            printf("Buzz\n");
        } else 
        {
            printf("%i\n", i);
        }
}

return 0;

////////////////////////////////////////////Questão 6

int n1, digito, soma = 0;


printf("Digite um número inteiro: ");
scanf("%i", &n1);        

while (n1 != 0)
{
    digito = n1 % 10;

    if(digito % 2 == 0)
    {
        soma += digito;
    }

    numero /= 10;
}

printf("A soma dos digitos pares é: %i", soma);

return 0;

////////////////////////////////////////////Questão 7

 int numero, digito, numeroInvertido = 0;

printf("Digite um número inteiro: ");
scanf("%i", &numero);

while (numero != 0) 
{

}

////////////////////////////////////////////Questão 8

int numero = 1, soma = 0;

while (numero <= 100)
{
    soma += 100;
    numero ++;
}

printf("A soma dos números de 1 a 100 é: %i.", soma);

return 0;

////////////////////////////////////////////Questão 9

int numero = 1, produto = 1;

while (numero <= 5) 
{
    produto *= numero;
    numero++;
}

printf("O produto dos números de 1 a 5 é: %i\n", produto);

return 0;

////////////////////////////////////////////Questão 10

int , resultado, multiplicador = 1;

while (multiplicador <= 10) 
{
    resultado = 9 * multiplicador;
    printf("9 x %i = %i.\n", multiplicador, resultado);
    multiplicador++;
}

return 0;

////////////////////////////////////////////Questão 11



////////////////////////////////////////////Questão 12



////////////////////////////////////////////Questão 13

int numero, digito, soma = 0;

printf("Digite um número inteiro: ");
scanf("%i", &numero);

while (numero != 0) 
{
    digito = numero % 10;  
    soma += pow(digito, 3); 
    numero /= 10;          
}

printf("A soma dos dígitos elevados ao cubo é: %i\n", soma);

return 0;

////////////////////////////////////////////Questão 14

int numero = 1;


while (numero <= 100) 
{
    printf("%i\n", numero);
    numero += 2;  
}

return 0;

////////////////////////////////////////////Questão 15

int numero = 3;

while (numero <= 50) 
{
    printf("%i\n", numero);
    numero += 3; 
}

return 0;

////////////////////////////////////////////Questão 16

int contador = 1;
int notasAprovadas = 0;
float nota;

while (contador <= 5) 
{
    printf("Digite a nota do aluno %i: ", contador);
    scanf("%f", &nota);

    if (nota >= 7.0) 
    {
        notasAprovadas++;
    }

    contador++;
}

printf("Quantidade de alunos aprovados: %i\n", notasAprovadas);

return 0;

////////////////////////////////////////////Questão 17

int numero, pares = 0;

printf("Digite uma sequência de números inteiros, devem ter espaços entre cada número. (digite 0 para encerrar): ");

while (1) 
{
    scanf("%i", &numero);

    if (numero == 0) 
    {
         break;  
    }

    if (numero % 2 == 0) 
    {
        pares++;
    } else 
        {
            break;  
        }
}

printf("Quantidade de números pares antes do primeiro ímpar: %i", pares);

return 0;

////////////////////////////////////////////Questão 18

int numero, pares = 0, impares = 0;

printf("Digite uma sequência de números inteiros, devem ter espaços entre cada número. (digite 0 para encerrar): ");

while (1) 
{
    scanf("%i", &numero);

    if (numero == 0) 
    {
        break; 
    }

    if (numero % 2 == 0) 
    {
        pares++;
    } else 
        {
            impares++;
        }
}

    // Exibe a quantidade de números pares e ímpares
    printf("Quantidade de números pares: %i\n", pares);
    printf("Quantidade de números ímpares: %i", impares);

return 0;

////////////////////////////////////////////Questão 19

int numero, dois = 0, tres = 0, cinco = 0;

printf("Digite uma sequência de números inteiros, devem ter espaços entre cada número. (digite 0 para encerrar): ");

while (1) 
{
    scanf("%i", &numero);

    if (numero == 0) 
    {
        break;  
    }

    if (numero % 2 == 0) 
    {
        dois++;
    }

    if (numero % 3 == 0)
    {
        tres++;
    }

    if (numero % 5 == 0) 
    {
        cinco++;
    }
}

printf("Quantidade de números divisíveis por 2: %i\n", dois);
printf("Quantidade de números divisíveis por 3: %i\n", tres);
printf("Quantidade de números divisíveis por 5: %i", cinco);

return 0;

////////////////////////////////////////////Questão 20



////////////////////////////////////////////Questão 21

int numero, tresdigitos = 0;

printf("Digite uma sequência de números inteiros, devem ter espaços entre cada número. (digite 0 para encerrar):");

while (1) 
{
    scanf("%i", &numero);

    if (numero == 0) 
    {
        break;
    }

    if (numero > 999 || numero < -999) 
    {
        tresdigitos++;
    }
}

printf("Quantidade de números com mais de três dígitos: %i", tresdigitos);

return 0;

////////////////////////////////////////////Questão 22



////////////////////////////////////////////Questão 23

////////////////////////////////////////////Questão 24
