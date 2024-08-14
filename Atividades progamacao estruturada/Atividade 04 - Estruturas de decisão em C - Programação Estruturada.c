////////////////////////////////////////////Questão 1

int number;

printf("Digite um número inteiro");
scanf("%d", &number);

if(number > 10)
{
    printf("O valor é maior que 10\n");
}else if (number == 10)
    {
        printf("O valor é igual a 10\n");
    }else
        {
            printf("O valor é menor que 10\n");
        }

return 0;

////////////////////////////////////////////Questão 2

char ch;

printf("Digite um símbolo de pontuação:");

ch = getchar();

switch (ch)
{
case '.' : printf("Ponto.\n");
break;

case ',' : printf("Vírgula.\n");
break;

case ':' : printf("Dois pontos.\n");
break;

case ';' : printf("Ponto e vírgula.\n");
break;
  
default: printf("Não é pontuação.\n");
    break;
}

system("pause");
return 0;

////////////////////////////////////////////Questão 3

int n1;

printf("Informe um número inteiro:");
scanf("%i", &n1);

if(n1 > 0)
{
    printf("O número é positivo!");
}else if(n1 < 0)
    {
         printf("O número é negativo!");
    }else
        {
             printf("Zero!");
        }

return 0;

////////////////////////////////////////////Questão 4

int idade;

printf("Informe sua idade:");
scanf("%i", &idade);

if(idade >= 18)
{
    printf("Você é maior de idade!");
}else
        {
             printf("Você é menor de idade!");
        }
    
return 0;

////////////////////////////////////////////Questão 5

int n1, n2;

printf("Informe o primeiro número inteiro:");
scanf("%i", &n1);

printf("Informe o segundo número inteiro:");
scanf("%i", &n2);

if(n1 > n2)
{
    printf("O primeiro valor é o maior!");
}else if (n1 < n2)
    {
        printf("O segundo valor é o maior!");
    }else
        {
            printf("Eles são iguais!");
        }

////////////////////////////////////////////Questão 6

int num;

printf("Informe um número inteiro:");
scanf("%i", &num);

if(num % 2 == 0)
{
    printf("O número é par!");
}else
        {
             printf("O número é ímpar!");
        }

return 0;

////////////////////////////////////////////Questão 7

int n1, n2, n3, nota;

printf("Escreva o primeiro número:");
scanf("%i", &n1);

printf("Escreva o segundo número:");
scanf("%i", &n2);

printf("Escreva o terceiro número:");
scanf("%i", &n3);

nota = (n1 + n2 + n3) / 3;

if(nota >= 7)
{
    printf("Aprovado!");
}else
        {
             printf("Reprovado!");
        }

return 0;


////////////////////////////////////////////Questão 8

char nome1, nome2 [30];
int n1, n2;

printf("Escreva seu nome:");
scanf("%s", &nome1);

printf("Escreva outro nome:");
scanf("%s", &nome2);

n1 = strlen(nome1); 
n2 = strlen(nome2);

if (n1 > n2)
{
    printf("%s tem mais caracteres que %s.", nome1, nome2);
}else if (n1 < n2)
    {
        printf("%s tem mais caracteres que %s.", nome2, nome1);
    }else
        {
            printf("%s e %s tem a mesma quantidade de caracteres.", nome1, nome2);
        }

return 0;

////////////////////////////////////////////Questão 9

char caractere;

printf("Digite um caractere: ");
scanf(" %c", &caractere);

 switch (caractere) 
 {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':

    printf("%c é uma vogal.", caractere);

break;
default: printf("%c é uma consoante.", caractere);

}

 return 0;

////////////////////////////////////////////Questão 10

int n1, n2, n3;

printf("Escreva o primeiro número:");
scanf("%i", &n1);

printf("Escreva o segundo número:");
scanf("%i", &n2);

printf("Escreva o terceiro número:");
scanf("%i", &n3);


////////////////////////////////////////////Questão 11

float peso, altura, imc;

printf("Escreva sua altura:");
scanf("%f", &altura);

printf("Escreva seu peso:");
scanf("%f", &peso);

imc = peso / (altura * altura);

if(imc <= 16.9)
{
    printf("Seu IMC é: %.2f! Muito abaixo do peso!", imc);
}
else if(imc >= 17 && imc <= 18.4)
{
    printf("Seu IMC é: %.2f! Abaixo do peso!", imc);
}
else if(imc >= 18.5 && imc <= 24.9)
{
    printf("Seu IMC é: %.2f! Peso normal!", imc);
}
else if(imc >= 25 && imc <= 29.9)
{
    printf("Seu IMC é: %.2f! Acima do peso!", imc);
}
else if(imc >= 30 && imc <= 34.9)
{
    printf("Seu IMC é: %.2f! Obesidade grau I!", imc);
}
else if(imc >= 35 && imc <= 40)
{
    printf("Seu IMC é: %.2f! Obesidade grau II!", imc);
}
else if(imc >= 40)
{
    printf("Seu IMC é: %.2f! Obesidade grau III!", imc);
}

return 0;

////////////////////////////////////////////Questão 12

int mes;

printf("Escreva um número de 1 a 12: ");
scanf("%i", &mes);

switch (mes)
{
case 1 : printf("Janeiro!");
break;
case 2 : printf("Fevereiro!");
break;
case 3 : printf("Março!");
break;
case 4 : printf("Abril!");
break;
case 5 : printf("Maio!");
break;
case 6 : printf("Junho!");
break;
case 7 : printf("Julho!");
break;
case 8 : printf("Agosto!");
break;
case 9 : printf("Setembro!");
break;
case 10 : printf("Outubro!");
break;
case 11 : printf("Novembro!");
break;
case 12 : printf("Dezembro!");
break;

    default: if(mes > 12)
    {
        printf("Número inválido!");
    }
}

return 0;

////////////////////////////////////////////Questão 13

int salario, salario2, aumento;

printf("Escreva seu salário: ");
scanf("%i", &salario);

if(salario <= 1500)
{
    aumento = salario * 0.15;
    salario2 = salario + aumento;

}else
    {
        aumento = salario * 0.10;
        salario2 = salario + aumento;
    }

printf("Seu novo salário agora é de: R$%i.", salario2);

return 0;

////////////////////////////////////////////Questão 14

int n1;

printf("Escreva um número: ");
scanf("%i", &n1);

if(n1 % 3 == 0 && n1 % 5 == 0)
{
    printf("O número é divisivel por 3 e 5!");
}else
    {
        printf("O número não é divisivel por 3 e 5!");
    }

return 0;

////////////////////////////////////////////Questão 15

char dia[20];

printf("Escreva o dia da semana por extenso: ");
scanf("%s", dia);

if(dia == "segunda" || dia == "Segunda")
{
    printf("Segunda!");
}else if(dia == "terça" || dia == "Terça")
    {
        printf("Terça!");
    }else if(dia == "quarta" || dia == "Quarta")
    {
        printf("Quarta!");
    }else if(dia == "quinta" || dia == "Quinta")
    {
        printf("Quinta!");
    }else if(dia == "sexta" || dia == "Sexta")
    {
        printf("Sexta!");
    }else if(dia == "sabado" || dia == "Sabado" || dia == "Sábado" || dia == "sábado")
    {
        printf("Sábado!");
    }else if(dia == "domingo" || dia == "Domingo")
    {
        printf("Domingo");
    }

return 0; 

////////////////////////////////////////////Questão 16

int n1;

printf("Escreva um número de 1 a 5: ");
scanf("%i", &n1);

switch (n1)
{
case 1 : printf("Muito insuficiente!");
break;
case 2 : printf("Insuficiente!");
break;
case 3 : printf("Regular!");
break;
case 4 : printf("Bom!");
break;
case 5 : printf("Muito bom!");
break;
default: if(n1 > 5)
    {
        printf("Número inválido!");
    }
}

return 0;

////////////////////////////////////////////Questão 17

int n1;

printf("Escreva um número de 1 a 7: ");
scanf("%i", &n1);

switch (n1)
{
case 1 : printf("Domingo!");
break;
case 2 : printf("Segunda!");
break;
case 3 : printf("Terça!");
break;
case 4 : printf("Quarta!");
break;
case 5 : printf("Quinta!");
break;
case 6 : printf("Sexta!");
break;
case 7 : printf("Sábado!");
break;
default: if(n1 > 7)
    {
        printf("Número inválido!");
    }
}

return 0;

////////////////////////////////////////////Questão 18

float num;
int arredondado;

printf("Digite um número decimal:");
scanf("%f", &num);

arredondado = round(num);

printf("O número arredondado para o inteiro mais próximo é %f", arredondado);

return 0;

////////////////////////////////////////////Questão 19

int idade;

printf("Escreva a sua idade: ");
scanf("%i", &idade);

if(idade >= 0 && idade < 1) 
{
    printf("Você ainda é um bebê!");
}else if(idade >= 1 && idade <= 12)
    {
        printf("Você já é uma criança!");
    }else if(idade >= 13 && idade <= 18)
    {
        printf("Você se tornou um adolescente!");
    }else if(idade > 18)
    {
        printf("Adulto!");
    } else {
        printf("Idade inválida!");
    }

return 0; 

////////////////////////////////////////////Questão 20

char estado[30];
int verificacao = 0;

printf("Escreva o seu estado civil: ");
scanf("%s", &estado);

 if (strcmp(estado, "Solteiro") == 0 || strcmp(estado, "solteiro")  == 0) 
 {
     verificacao = 1;
 }
 if (strcmp(estado, "Casado") == 0 || strcmp(estado, "casado")  == 0)
 {
     verificacao = 2;
 }
 if (strcmp(estado, "Divorciado") == 0 || strcmp(estado, "divorciado")  == 0) 
 {
     verificacao = 3;
 }
 if (strcmp(estado, "Viúvo") == 0 || strcmp(estado, "viúvo") == 0 || strcmp(estado, "Viuvo") == 0 || strcmp(estado, "viuvo")  == 0) 
 {
     verificacao = 4;
 }

 switch (verificacao)
 {
 case 1:
    printf("Você é solteiro!");
    break;
 case 2:
    printf("Você é Casado!");
    break;
 case 3:
    printf("Você é Divorciado!");
    break;
 case 4:
    printf("Você é Viúvo!");
    break;
 
 default:
    printf("Você não escreveu corretamente.");
    break;
 }
       
return 0;

////////////////////////////////////////////Questão 21

int n1, n2, verificacao, operacao;

printf("Digite o primeiro número: ");
scanf("%i", &n1);

printf("Digite o segundo número: ");
scanf("%i", &n2);

printf("Qual operação você deseja realizar?\n");
printf("1- Soma | 2- Subtração | 3- Multiplicação | 4- Divisão:\n");
scanf("%i", &verificacao);

switch (verificacao)
 {
 case 1:
    operacao = n1 + n2;
    printf("A soma de %i + %i é: %i!", n1, n2, operacao);
    break;
 case 2:
    operacao = n1 - n2;
    printf("A subtração de %i - %i é: %i!", n1, n2, operacao);
    break;
 case 3:
    operacao = n1 * n2;
    printf("A multiplicação de %i x %i é: %i!", n1, n2, operacao);
    break;
 case 4:
    operacao = n1 / n2;
    printf("A divisão de %i / %i é: %i!", n1, n2, operacao);
    break;
 
 default:
    printf("Escolha um número indicado para realizar a operação.");
    break;
 }

 return 0;

////////////////////////////////////////////Questão 22

char nome[50];
int idade;

printf("Digite seu nome: ");
scanf("%s", nome);

while (1)
{
    printf("Digite sua idade: ");

    if(scanf("%i", &idade) == 1)
    {
        break;
    }else
        {
            printf("Insira um valor inteiro!");
        }
}

printf("Seu nome é %s!", nome);
printf("Você tem %i anos!", idade);

return 0;

////////////////////////////////////////////Questão 23

float metros, cm, mm, km;

printf("Informe o valor em metros: ");
scanf("%f", &metros);

mm = metros * 1000;
cm = metros * 100;
km = metros / 1000;

printf("%.2f metros é igual a %.2f milímetros\n", metros, mm);
printf("%.2f metros é igual a %.2f centímetros\n", metros, cm);
printf("%.2f metros é igual a %.5f quilômetros\n", metros, km);

return;
