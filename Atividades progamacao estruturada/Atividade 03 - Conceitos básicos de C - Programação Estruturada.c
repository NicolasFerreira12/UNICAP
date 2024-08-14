////////////////////////////////////////////Questão 1

#include <stdio.h>
#include <stdlib.h>

int x = 10;

//Escrita de um valor inteiro
printf("%d\n", x);
float y = 5.0;

//Escrita de um valor inteiro e outro real
printf("%d%f \n", x, y);

//Adicionando espaço entre os valores
printf("%d %f \n", x, y);
system("pause");
return 0;


////////////////////////////////////////////Questão 2

#include <stdio.h>
#include <stdlib.h>

int x,z;
float y;

//Leitura de um valor inteiro 
scanf("%d", &x);

//Leitura de um valor real
scanf("%f", &y);

//Leitura de um valor inteiro e outro real
scanf("%d%f", &x, &y);

//Leitura de dois valores inteiros
scanf("%d%d", &x, &z);

//Leitura de dois valores inteiros com espaço
scanf("%d %d", &x, &z);
system("pause");

return 0;

////////////////////////////////////////////Questão 3

char nome [30];

printf("Escreva seu nome:");
scanf("%s", &nome);
printf("Boas-vindas, %s", nome);

return 0;

////////////////////////////////////////////Questão 4

char idadeString [3];
int idadeInt;

printf("Escreva sua idade:");
scanf("%s", &idadeString);

idadeInt = atoi(idadeString);
printf("O número foi convertido: %d", idadeInt);

return 0;

///////////////////////////////////////////Questão 5

int numInt;
float numFloat;

printf("Escreva um número inteiro:");
scanf("%i", &numInt);

numFloat = (float)numInt;
printf("O número foi convertido para: %f", numFloat);

return 0;

////////////////////////////////////////////Questão 6

int n1,n2, soma;

printf("Escreva o primeiro número:");
scanf("%i", &n1);

printf("Escreva o primeiro número:");
scanf("%i", &n2);

soma = n1 + n2;

printf("A soma dos valores é: %i", soma);

return 0;

////////////////////////////////////////////Questão 7

float decimal, multi;

printf("Escreva o número decimal:");
scanf("%f", &decimal);

multi = decimal * decimal;

printf("O quadrado do número é: %f", multi);  

return 0;

////////////////////////////////////////////Questão 8

int anoNasc, idade, idade2, verificacao;

printf("Escreva o ano de seu nascimento:");
scanf("%i", &anoNasc);

printf("Você já fez aniversário este ano? Digite 1 para Sim ou 2 para Não.");
scanf("%i", &verificacao);

idade = 2024 - anoNasc;

if(verificacao == 1)
{
    printf("Você tem %i anos!", idade);
}
if(verificacao == 2)
{
    idade2 = idade - 1;
    printf("Você tem %i anos!", idade2);
}

return 0;

////////////////////////////////////////////Questão 9

#include <string.h>

char nome[20], sobrenome[20];
char espaço[] = " ";

printf("Escreva o seu nome: ");
scanf("%s", &nome);

printf("Escreva o seu sobrenome: ");
scanf("%s", &sobrenome);

strcat(nome, espaço);
strcat(nome, sobrenome);

printf("Seu nome é: %s", nome);

return 0;

////////////////////////////////////////////Questão 10

int 

////////////////////////////////////////////Questão 11

char animal[30];

printf("Escreva o nome de um animal: ");
scanf("%s", &animal);

printf("O animal escrito foi o: %s", animal);

return 0;

////////////////////////////////////////////Questão 12

char nome[20], sobrenome[20];
char espaço[] = " ";

printf("Escreva o seu nome: ");
scanf("%s", &nome);

printf("Escreva o seu sobrenome: ");
scanf("%s", &sobrenome);

strcat(sobrenome, espaço);
strcat(sobrenome, nome);

printf("Seu nome é: %s", sobrenome);

return 0;

////////////////////////////////////////////Questão 13

#include <stdio.h>
#include <string.h>

char texto[50];

printf("Escreva algo:");
scanf("%s", &texto);

int quantidade = strlen(texto);
printf("A quantidade de caracteres digitados foi de: %i", quantidade);

return 0;

////////////////////////////////////////////Questão 14

int num;

printf("Escreva um número inteiro:");
scanf("%i", &num);

if(num % 2 == 0)
{
    printf("O número %i é par!", num);
}
if(num % 2 != 0)
{
    printf("O número %i é ímpar", num);
}

return 0;

////////////////////////////////////////////Questão 15

int numero;

printf("Escreva um número inteiro:");
scanf("%i", &numero);

if(numero > 0)
{
    printf("O número %i é positivo!", numero);
}
if(numero < 0)
{
    printf("O número %i é negativo!", numero);
}

if(numero == 0)
{
    printf("0 é neutro!");
}

return 0;

////////////////////////////////////////////Questão 16

float n1, n2;

printf("Escreva um número:");
scanf("%f", &n1);

printf("Escreva outro número:");
scanf("%f", &n2);

if(n1 > n2)
{
    printf("O maior número é o: %f", n1);
}else
    {
        printf("O maior número é o: %f", n2);
    }   

return 0;

////////////////////////////////////////////Questão 17

float peso, altura, imc;

printf("Escreva sua altura:");
scanf("%f", &altura);

printf("Escreva seu peso:");
scanf("%f", &peso);

imc = peso / (altura * altura);
printf("Seu IMC é: %f", imc);

return 0;

////////////////////////////////////////////Questão 18

#include <stdio.h>
#include <string.h>

char nome[10];

 printf("Escreva o seu nome: ");
 scanf("%s", &nome);

 int caracteres = strlen(nome);

if(caracteres > 5)
    {
        printf("Seu nome contém mais que 5 caracteres! Possui no total %i caracteres.", caracteres);
    }else
        {
            printf("Seu nome não contém mais que 5 caracteres! Possui no total %i caracteres.", caracteres);
        }   

 return 0;

////////////////////////////////////////////Questão 19

int estado;

printf("Escreva o seu estado civil: \n");
printf("1 - Solteiro(a)   | 2 - Casado(a)   | 3 - Viuvo(a) \n");
printf("4 - Divorciado(a) | 5 - Separado(a) |              \n");
scanf("%i", &estado);

if(estado == 1)
{
    printf("Você é solteiro(a)!");
}
if(estado == 2)
{
    printf("Você é casado(a)!");
}
if(estado == 3)
{
    printf("Você é viuvo(a)!");
}
if(estado == 4)
{
    printf("Você é divorciado(a)!");
}
if(estado == 5)
{
    printf("Você é separado(a)!");
}


return 0;

////////////////////////////////////////////Questão 20

float base, altura, area;

printf("Escreva a base do retângulo:");
scanf("%f", &base);

printf("Escreva a altura do retângulo:");
scanf("%f", &altura);

area = base * altura;

printf("A área do retângulo é: %f", area);

return 0;

////////////////////////////////////////////Questão 21

char cidade[30];

printf("Escreva o nome da sua cidade:")
scanf("%s", &cidade);

if(cidade[0] == "S" || cidade[0] == "s")
{
    printf("O nome da cidade começa com a letra S!");
}else
    {
        printf("O nome da cidade não começa com a letra S!");
    }

return 0;

////////////////////////////////////////////Questão 22

float n1, n2, div;

printf("Digite o primeiro número decimal:");
scanf("%f", &n1);

printf("Digite o segundo número decimal:");
scanf("%f", &n2);

div = n1 % n2;

printf("O resto da divisão entre os dois números é: %f", div);

return 0;

////////////////////////////////////////////Questão 23

float n1;
int conversao;

printf("Digite um número decimal:");
scanf("%f", &n1);

conversao = (int)n1;

printf("O número convertido é o: %i", conversao);

return 0;


////////////////////////////////////////////Questão 24

char string[30];
int inteiro;

printf("Digite um número inteiro:");
scanf("%s", &string);

inteiro = atoi(string);

inteiro += 10;

sprintf(string, "%d", inteiro);

printf("O número convertido e somado em 10 é o:' %s", string);

return 0;

////////////////////////////////////////////Questão 25

char dia[30], mes[30], ano[30];
int diaInt, mesInt, anoInt;

printf("Digite o dia:");
scanf("%s", &dia);

printf("Digite o mês:");
scanf("%s", &mes);

printf("Digite o ano:");
scanf("%s", &ano);

diaInt = atoi(dia);
mesInt = atoi(mes);
anoInt = atoi(ano);

printf("A data escrita foi: %i/ %i/%i", diaInt, mesInt, anoInt);

return 0;

////////////////////////////////////////////Questão 26

char cidade[30], estado[30], conca[60];

printf("Digite a cidade que você mora:");
scanf("%s", &cidade);

printf("Digite a cidade que você mora:");
scanf("%s", &estado);

sprintf(conca,"Você mora em %s, %s", cidade, estado);

printf("%s", conca);

return 0;

////////////////////////////////////////////Questão 27

char ano[30], conca[60];

printf("Digite o seu ano de nascimento:");
scanf("%s", &ano);

sprintf(conca,"Bem-vindo ao nosso programa, nascido em %s.", ano);

printf("%s", conca);

return 0;

////////////////////////////////////////////Questão 28

char string[30], string2[50];
int inteiro;

printf("Digite um número inteiro:");
scanf("%i", &inteiro);

printf("Digite uma string:");
scanf("%s", &string);

sprintf(string2, "%s %i", string, inteiro);

printf("Os valores digitados foram: %s", string2);

return 0;

////////////////////////////////////////////Questão 29

char produto[30], preço[50], conca[80];

printf("Digite um produto:");
scanf("%s", &produto);

printf("Digite o preço:");
scanf("%s", &preço);

sprintf(conca, "O produto %s custa R$%s.", produto, preço);

printf("%s", conca);

return 0;

////////////////////////////////////////////Questão 30

char conca[30];
int inteiro, inteiro2;

printf("Digite um número inteiro:");
scanf("%i", &inteiro);

inteiro2 = inteiro * 2;

sprintf(conca, "O dobro desse número é: %i", inteiro2);

printf("%s", conca);

return 0;

////////////////////////////////////////////Questão 31

char email[30], conca[50];

printf("Digite seu e-mail:");
scanf("%s", &email);

sprintf(conca, "Seja bem-vindo, %s.", email);

printf("%s", conca);

return 0;

////////////////////////////////////////////Questão 32

int n1, n2, soma, diferenca, produto, quociente;

printf("Digite o primeiro número inteiro:");
scanf("%i", &n1);

printf("Digite o segundo número inteiro:");
scanf("%i", &n2);

soma = n1 + n2;
diferenca = n1 - n2;
produto = n1 * n2;
quociente = n1 / n2;

printf("A soma dos valores é: %i. \n", soma);
printf("A diferença dos valores é: %i. \n", diferenca);
printf("O produto dos valores é: %i. \n", produto);
printf("O quociente dos valores é: %i. \n", quociente);

return 0;

////////////////////////////////////////////Questão 33

float base, altura, area;

printf("Escreva a base do triângulo:");
scanf("%f", &base);

printf("Escreva a altura do triângulo:");
scanf("%f", &altura);

area = (base * altura) / 2;

printf("A área do triângulo é %f", area);

return 0;

////////////////////////////////////////////Questão 34

float raio, perimetro;

printf("Escreva o raio da circunferência:");
scanf("%f", &raio);

perimetro = 3,14 * (raio^2);

printf("A área do triângulo é %f", area);

return 0;

////////////////////////////////////////////Questão 35

float base, altura, area;

printf("Escreva a base do triângulo:");
scanf("%f", &base);

printf("Escreva a altura do triângulo:");
scanf("%f", &altura);

area = (base * altura) / 2;

printf("A área do triângulo é %f", area);

return 0;

////////////////////////////////////////////Questão 36

int n1, n2, n3, media;

printf("Escreva o primeiro número:");
scanf("%i", &n1);

printf("Escreva o segundo número:");
scanf("%i", &n2);

printf("Escreva o terceiro número:");
scanf("%i", &n3);

media = (n1 + n2 + n3) / 3;
printf("A média aritmética dos três números é: %i", media);

return 0;

////////////////////////////////////////////Questão 37

int idade, meses, dias;

printf("Escreva a sua idade:");
scanf("%i", &idade);

meses = idade * 12;
dias = idade * 365;

printf("Você já viveu %i meses e %i dias.", meses, dias);

return 0;


////////////////////////////////////////////Questão 38

float reais, cot, dol;

printf("Escreva a quantidade em reais que deseja converter:");
scanf("%f", &reais);

printf("Escreva a cotação do dólar atualmente:");
scanf("%f", &cot);

dol = reais * cot;

printf("O valor convertido para dólares é de R$%.2f.", dol);

return 0;

////////////////////////////////////////////Questão 39

float num;
int arredondado;

printf("Digite um número decimal:");
scanf("%f", &num);

arredondado = round(num);

printf("O número arredondado para o inteiro mais próximo é %f", arredondado);

return 0;

////////////////////////////////////////////Questão 40

float n1, n2, n3, resultado;

printf("Digite o primeiro número: ");
    scanf("%f",&n1);
printf("Digite o segundo número: ");
    scanf("%f",&n2);
printf("Digite o terceiro número: ");
    scanf("%f",&n3);

resultado = (n1 + n2) * n3;
printf("O resultado é: %f", resultado);

return 0;

////////////////////////////////////////////Questão 41

float graus, resultado; 

printf("Digite a temperatura em graus Celsius: ");
scanf("%f",&graus);

resultado = (graus * 9/5) + 32;
    
printf("A temperatura em Fahrenheit é de: %f", resultado);

return 0;

