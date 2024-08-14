/////////////////////////////////////////////////Questão 1
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

char string[20];

printf("Escreva algo: ");
fgets(string, 20, stdin);

printf("Você digitou: ");
printf("%s", string);

return 0;

}

/////////////////////////////////////////////////Questão 2

char string[] = "Bicicleta";
int tamanho;

//printf("Escreva algo: ");
//fgets(string, 20, stdin);

tamanho = sizeof(string) -1;

printf("O comprimento da palavra %s é : %i", string, tamanho);

return 0;

/////////////////////////////////////////////////Questão 3

int i = 0;
char frase1[100], frase2[100];

printf("Escreva uma palavra: ");
fgets(frase1, 100, stdin);

printf("Escreva outra palavra: ");
fgets(frase2, 100, stdin);

while(frase1[i] == frase2[i] && frase1[i] != '\0')
{
    i++;
}

if(frase1[i] = frase2[i])
{
    printf("As palavras são diferentes.");
}else
    {
        printf("As palavras são iguais.");
    }

return  0;

/////////////////////////////////////////////////Questão 4

char nome[100];

printf("Escreva um nome: ");
fgets(nome, sizeof(nome), stdin);

printf("As 4 primeiras letras desse nome são: ");

for (int i = 0, i < 4 && nome[i] != '\0'; i++)
{
    printf("%c", nome[i]);
}

return 0;

/////////////////////////////////////////////////Questão 5

char nome[100];

printf("Escreva um nome: ");
fgets(nome, sizeof(nome), stdin);

printf("Este nome contém %d letras.", strlen(nome) -1);

return 0;

/////////////////////////////////////////////////Questão 6 *****

char nome[100], sexo[10];
int idade;

printf("Escreva seu nome: ");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = 0;

printf("Escreva seu sexo: ");
fgets(sexo, sizeof(sexo), stdin);
sexo[strcspn(sexo, "\n")] = 0;

printf("Escreva sua idade: ");
scanf("%d", &idade);

for(int i = 0; sexo[i]; i++)
{
  sexo[i] = tolower(sexo[i]);
}

if(strcmp(sexo, "feminino") == 0 && idade < 25)
{
    printf("%s aceita.", nome); 
}else
    {
        printf("Não aceita.");
    }   

return 0;

/////////////////////////////////////////////////Questão 7

char str[100];
int um = 0;

printf("Escreva uma sequencia de 1 e 0: ");
fgets(str, sizeof(str), stdin);

for(int i = 0; str[i] != '\0'; i++)
{
  if(str[i] == '1')
  {
    um += 1;
  }
}

printf("A quantidade de 1's é: %d", um);

return 0;

/////////////////////////////////////////////////Questão 8

char str[100];
int um = 0;

printf("Escreva uma sequencia de 1 e 0: ");
fgets(str, sizeof(str), stdin);

for(int i = 0; str[i] != '\0'; i++)
{
  if(str[i] == '0')
  {
    str[i] = '1';
  }
  
}

printf("Os 0's foram substituidos por 1's: %s", str);

return 0;

/////////////////////////////////////////////////Questão 9

char nome[100];

printf("Escreva seu nome: ");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = 0;

if (nome[0] == 'a' || nome[0] == 'A')
    {
        printf("%s", nome);
    }else
        {
            printf("Seu nome não começa com a letra A.");
        }

return 0;

/////////////////////////////////////////////////Questão 10

char palavra[100];
int tamanho;

printf("Escreva uma palavra: ");
fgets(palavra, sizeof(palavra), stdin);
palavra[strcspn(palavra, "\n")] = 0;

tamanho = strlen(palavra);

printf("Palavra invertida: ");
for (int i = tamanho -1; i >= 0; i--)
{
    printf("%c", palavra[i]);
}

return 0;

/////////////////////////////////////////////////Questão 11

char palavra[100];
int tamanho;

printf("Escreva uma palavra: ");
fgets(palavra, sizeof(palavra), stdin);
palavra[strcspn(palavra, "\n")] = 0;

tamanho = strlen(palavra);

for(int i = 0; palavra[i]; i++)
{
  palavra[i] = tolower(palavra[i]);
}

for (int i = 0; i < tamanho; i++)
{
    if (palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u')
    {
        printf("%c", palavra[i])
    }
}

return 0;

/////////////////////////////////////////////////Questão 12

char palavra[100];
int tamanho, contador = 0;

printf("Escreva uma palavra: ");
fgets(palavra, sizeof(palavra), stdin);
palavra[strcspn(palavra, "\n")] = 0;

tamanho = strlen(palavra);

for(int i = 0; palavra[i]; i++)
{
  palavra[i] = tolower(palavra[i]);
}

for (int i = 0; i < tamanho; i++)
{
    if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
    {
        contador += 1;
    }
}

printf("A palavra possui %d vogais. \n", contador);

printf("A palavra com suas vogais substituidas pela letra X: \n");
for (int i = 0; i < tamanho; i++)
{
    if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
    {
        palavra[i] = 'x';
    }
    printf("%c", palavra[i]);
}

return 0;

/////////////////////////////////////////////////Questão 13

char frase[100];
int tamanho, contador = 0;

printf("Escreva uma frase: ");
fgets(frase, sizeof(frase), stdin);
frase[strcspn(frase, "\n")] = 0;

tamanho = strlen(frase);

for (int i = 0; i < tamanho; i++)
{
    if (frase[i] == ' ')
    {
        contador += 1;
    }
}

printf("Sua frase contem %d caracteres brancos.", contador);

return 0;

/////////////////////////////////////////////////Questão 14

char palavra[51];
int tamanho;

printf("Escreva uma palavra com no maximo 50 letras: ");
fgets(palavra, sizeof(palavra), stdin);
palavra[strcspn(palavra, "\n")] = 0;

tamanho = strlen(palavra);

printf("Palavra somada com 1 no valor ASCII de cada caractere da palavra: ");
for (int i = 0; i < tamanho; i++)
{
    palavra[i] = palavra[i] + 1;
    printf("%c", palavra[i]);
}

return 0;

/////////////////////////////////////////////////Questão 15

char palavra[51];
int tamanho;

printf("Escreva uma palavra com somente letras minusculas: ");
fgets(palavra, sizeof(palavra), stdin);
palavra[strcspn(palavra, "\n")] = 0;

tamanho = strlen(palavra);

for(int i = 0; palavra[i]; i++)
{
  palavra[i] = tolower(palavra[i]);
}

printf("Palavra em UpperCase: ");
for (int i = 0; i < tamanho; i++)
{
    palavra[i] = palavra[i] - 32;
    printf("%c", palavra[i]);
}

return 0;

/////////////////////////////////////////////////Questão 16

char palavra[51];
int tamanho;

printf("Escreva uma palavra com somente letras maiusculas: ");
fgets(palavra, sizeof(palavra), stdin);
palavra[strcspn(palavra, "\n")] = 0;

tamanho = strlen(palavra);

for(int i = 0; i < tamanho; i++)
{
  palavra[i] = tolower(palavra[i]);
}

printf("Palavra em LowerCase: \n");
printf("%s", palavra);

return 0;

/////////////////////////////////////////////////Questão 17

char frase[100];
int tamanho;

printf("Escreva uma frase: ");
fgets(frase, sizeof(frase), stdin);
frase[strcspn(frase, "\n")] = 0;

tamanho = strlen(frase);

printf("Frase sem os espaços em branco: \n");

for (int i = 0; i < tamanho; i++)
{
    if (frase[i] != ' ')
    {
        printf("%c", frase[i]);
    }
}

return 0;

/////////////////////////////////////////////////Questão 18

char l1, l2, frase[100];
int tamanho;

printf("Escreva uma frase: ");
fgets(frase, sizeof(frase), stdin);
frase[strcspn(frase, "\n")] = 0;

printf("Escolha a L1: ");
scanf(" %c", &l1);

printf("Escolha a L2: ");
scanf(" %c", &l2);

tamanho = strlen(frase);

l1 = tolower(l1);
l2 = tolower(l2);

for(int i = 0; i < tamanho; i++)
{
  frase[i] = tolower(frase[i]);
}

for (int i = 0; i < tamanho; i++)
{
    if (frase[i] == l1)
    {
        frase[i] = l2;
    }
}

printf("Sua frase com as letras L1 substituidas pela L2 é: %s\n", frase);

return 0;

/////////////////////////////////////////////////Questão 19



/////////////////////////////////////////////////Questão 20

char modelos[100] = "fusca, creta, vectra, opala, lamborghini";
int consumo[] = {9, 8, 7, 5, 3};



/////////////////////////////////////////////////Questão 21

char frase[100], frase2[100];
int tamanho, tamanho2;

printf("Escreva uma frase: ");
fgets(frase, sizeof(frase), stdin);
frase[strcspn(frase, "\n")] = 0;

printf("Escreva outra frase: ");
fgets(frase2, sizeof(frase2), stdin);
frase2[strcspn(frase2, "\n")] = 0;

tamanho = strlen(frase);
tamanho2 = strlen(frase2);

for(int i = 0; i < tamanho; i++)
{
  frase[i] = tolower(frase[i]);
}

for (int i = 0; i < tamanho; i++)
{
    if (frase[i] == 'a')
    {
        frase[i] = '*';
    }
}

for (int i = 0; i < tamanho; i++)
{
    if (frase2[i] == 'a')
    {
        frase2[i] = '*';
    }
}

printf("Sua frase com as letras A foram substituidas por *: %s\n", frase);
printf("Sua segunda frase com as letras A foram substituidas por *: %s\n", frase2);

return 0;

/////////////////////////////////////////////////Questão 22

char mercadoria[100];
float valor, vista;

printf("Escreva a mercadoria: ");
fgets(mercadoria, sizeof(mercadoria), stdin);
mercadoria[strcspn(mercadoria, "\n")] = 0;

printf("Informe o valor da mercadoria: ");
scanf("%f", &valor);

vista = valor - (valor * 0.1);

printf("A mercadoria %s custa R$%.2f, com o desconto de pagamento à vista fica R$%.2f.", mercadoria, valor, vista);

return 0;

/////////////////////////////////////////////////Questão 23

char string[100];
int i,j;

printf("Escreva a mercadoria: ");
fgets(mercadoria, sizeof(mercadoria), stdin);
mercadoria[strcspn(mercadoria, "\n")] = 0;

/////////////////////////////////////////////////Questão 24

char c, string[100];
int I, tamanho, posicao;

printf("Escreva uma frase: ");
fgets(string, sizeof(string), stdin);
string[strcspn(string, "\n")] = 0;

printf("Escreva o caractere que você deseja buscar: ");
scanf(" %c", &c);

printf("Escreva a posição i: ");
scanf("%d", &I);

tamanho = strlen(string);

for(int i = 0; i < tamanho; i++)
{
  string[i] = tolower(string[i]);
}

c = tolower(c);

for (int i = I; i < tamanho; i++)
{
    if (string[i] == c);
    {
        posicao = i;
        break;
    }
}

if (posicao != -1)
{
    printf("O caractere '%c' foi encontrado na posição %d da sua frase.\n", c, posicao);
}else
{
    printf("O caractere ''%c'' não foi encontrado na sua frase.", c);
}


return 0;

/////////////////////////////////////////////////Questão 25

char palavra1[100], palavra2[100];

printf("Digite a primeira palavra: ");
scanf("%s", palavra1);

printf("Digite a segunda palavra: ");
scanf("%s", palavra2);

int comparacao = strcmp(palavra1, palavra2);

if (comparacao < 0)
{
    printf("'%s' vem antes de '%s' na ordem alfabética.\n", palavra1, palavra2);
}else if
    {
        printf("'%s' vem antes de '%s' na ordem alfabética.\n", palavra2, palavra1);
    }else
        {
            printf("As palavras são iguais.\n");
        }

return 0;

/////////////////////////////////////////////////Questão 26

char frase[100];
int tamanho;

printf("Escreva uma frase: ");
fgets(frase, sizeof(frase), stdin);
frase[strcspn(frase, "\n")] = 0;

tamanho = strlen(frase);

for(int i = 0; frase[i]; i++)
{
  frase[i] = tolower(frase[i]);
}

printf("Sua frase codificada com o código de César: \n");
for(int i = 0; i < tamanho; i++)
{
  frase[i] = 'a' + (frase[i] - 'a' + 3) % 26;
  printf("%c", toupper(frase[i]));
}

return 0;

/////////////////////////////////////////////////Questão 27



/////////////////////////////////////////////////Questão 28

char stringS1[21], stringS2[21];
int opcao = 0, tamanhoS1, tamanhoS2, contador;

printf("Escreva a primeira palavra: ");
fgets(stringS1, sizeof(stringS1), stdin);
stringS1[strcspn(stringS1, "\n")] = 0;

tamanhoS1 = strlen(stringS1);

printf("Escreva a segunda palavra: ");
fgets(stringS2, sizeof(stringS2), stdin);
stringS2[strcspn(stringS2, "\n")] = 0;

tamanhoS2 = strlen(stringS2);

printf("             Menu de opções: \n");
printf("------------------------------------------\n");
printf("|Qual operação você deseja realizar?     |\n");
printf("|                                        |\n");
printf("|1- Imprimir a primeira                  |\n");
printf("|2- Imprimir o tamanho da primeira       |\n");
printf("|3- Comparar a primeira com a segunda    |\n");
printf("|e imprimir                              |\n");
printf("|4- Concatenar a primeira com a segunda  |\n");
printf("|e imprimir                              |\n");    
printf("|5- Imprimir a primeira reversa          |\n"); 
printf("|6- Contar quantas vezes um caractere    |\n"); 
printf("|aparece na primeira                     |\n"); 
printf("|7- Substituir um caracter por outro na  |\n");         
printf("|primeira                                |\n"); 
printf("------------------------------------------\n");
scanf("%i", &opcao);

switch (opcao != 0)
{
case 1: printf("%s", stringS1);
break;

case 2: printf("Tamanho da primeira frase: %i", tamanhoS1);
break;

case 3: int comparacao = strcmp(stringS1, stringS2);
        printf("Resultado da comparação da primeira com a segunda palavra: %i", comparacao);
break;

case 4: strcat(stringS1, stringS2);
        printf("Resultado da concatenação da primeira com a segunda palavra: %s", stringS1);
break;

case 5: printf("Primeira palavra invertida: ");
        for (int i = tamanhoS1 -1; i >= 0; i--)
            {
                printf("%c", stringS1[i]);
            }
break;

case 6: printf("Escreva o caractere que você deseja buscar: ");
        scanf(" %c", &c);

        for(int i = 0; i < tamanhoS1; i++)
        {
            stringS1[i] = tolower(stringS1[i]);
        }

        c = tolower(c);

        for (int i = 0; i < tamanhoS1; i++)
        {
            if (stringS1[i] == c)
                {
                    contador += 1;
                }
        }
        
        printf("O caractere escolhido apareceu %i vezes na primeira palavra.", contador);
break;

case 7: printf("Escolha um caractere: ");
        scanf(" %c", &c1);

        printf("Escolha o segundo caractere: ");
        scanf(" %c", &c2);

        c1 = tolower(c1);
        c2 = tolower(c2);

        for(int i = 0; i < tamanho; i++)
        {
            stringS1[i] = tolower(stringS1[i]);
        }

        for (int i = 0; i < tamanho; i++)
        {
            if (stringS1[i] == c1)
            {
                stringS1[i] = c2;
                break;
            }
            printf("A primeira frase com seu primeiro caractere escolhido modificado pelo segundo: \n");
            printf("%c", stringS1[i])
        }

printf("Sua frase com as letras L1 substituidas pela L2 é: %s\n", frase);
break;

default: if (opcao > 7 || opcao <= 0)
         {
            printf("Digite um valor válido do Menu.");
         }
break;

return 0;

}

/////////////////////////////////////////////////Questão 29

/////////////////////////////////////////////////Questão 30

