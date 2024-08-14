#include <stdio.h>

//////////////////////////////////////////////////////// Questão 1

#include <stdio.h>

int main()
{
    int matriz[4][4];
    int i, j, contador = 0;

    printf("Digite os valores para a matriz 4x4: \n");
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++ )
        {
            printf("Elemento [%i][%i]: ", i,j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++ )
    {
        for(j = 0; j < 4; j++)
        {
            if(matriz[i][j] > 10)
            {
                contador++;
            }
        }
    }

    printf("\n");
    printf("A matriz possui %i valores maiores que 10!", contador);

return 0; 
}

//////////////////////////////////////////////////////// Questão 2

int matriz[5][5] =
    {
        {1,0,0,0,0},
        {0,1,0,0,0},
        {0,0,1,0,0},
        {0,0,0,1,0},
        {0,0,0,0,1},
    };

    int linhas, colunas;

    for (linhas = 0; linhas < 5; linhas++)
    {
        for(colunas = 0; colunas < 5; colunas++)
        {
            printf("%d     ",matriz[linhas][colunas]);
        }
    printf("\n");
    }
    
return 0;

//////////////////////////////////////////////////////// Questão 3

#include <stdio.h>

int main()
{
    
int matriz[4][4];
int i, j;

for (i = 0; i < 4; i++ )
{
    for(j = 0; j < 4; j++)
    {
    matriz[i][j] = i*j;
    }
}


int linhas,colunas;

for (linhas = 0; linhas < 4; linhas++)
    {
        for(colunas = 0; colunas < 4; colunas++)
        {
            printf("%d     ",matriz[linhas][colunas]);
        }

    printf("\n");
    }
        
return 0;

}


//////////////////////////////////////////////////////// Questão 4 **

#include <stdio.h>

int main()
{

int matriz[4][4];
int i, j, linhas, colunas, maiorLinha, maiorColuna;
int maior = matriz[0][0];

printf("Digite os valores para a matriz 4x4: \n");
    
for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++ )
            {
                printf("Elemento [%i][%i]: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

for (i = 0; i < 4; i++ )
    {
        for(j = 0; j < 4; j++)
           {
                if(matriz[i][j] > maior)
                {
                    maiorLinha = i;
                    maiorColuna = j;
                }
            }
    }
  
for(linhas = 0; linhas < 4; linhas++)
    {
        for(colunas = 0; colunas < 4; colunas++)
            {
                printf("%d     ",matriz[linhas][colunas]);
            }
    printf("\n");
    }

printf("O maior elemento da matriz está na linha [%i] e coluna [%i].", maiorLinha, maiorColuna);

return 0;
}

//////////////////////////////////////////////////////// Questão 5

int matriz[5][5];
int i, j, x;
int valorEncontrado = 0;

printf("Digite os valores para a matriz 5x5: \n");
    
for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++ )
            {
                printf("Elemento [%i][%i]: ", i,j);
                scanf("%i", &matriz[i][j]);
            }   
    }

printf("Digite um valor X: \n");
scanf("%i", &x);

for (i = 0; i < 4; i++ )
    {
        for(j = 0; j < 4; j++)
           {
                if(matriz[i][j] == x)
                {
                    printf("Valor encontrado na posicao [%i][%i] da matriz! ", i, j);
                    valorEncontrado = 1;
                }
            }
    }
 
if(valorEncontrado != 1)
{
    printf("Valor nao encontado na matriz.");
}

    return 0;

//////////////////////////////////////////////////////// Questão 6

int matriz1[4][4], matriz2[4][4], matriz3[4][4];
int i,j, linhas, colunas;


printf("Informe os valores da primeira matriz.\n");
for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++ )
            {
                printf("Elemento [%i][%i] da primeira matriz: ", i,j);
                scanf("%i", &matriz1[i][j]);
            }
    }

printf("Informe os valores da segunda matriz.\n");
for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++ )
            {
                printf("Elemento [%i][%i] da segunda matriz: ", i,j);
                scanf("%i", &matriz2[i][j]);
            }
    }

for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++ )
            {
                if(matriz1[i][j] > matriz2[i][j])
                {
                    matriz3[i][j] = matriz1[i][j];
                }else
                    {
                        matriz3[i][j] = matriz2[i][j];
                    }
            }
    }

for(linhas = 0; linhas < 4; linhas++)
    {
        for(colunas = 0; colunas < 4; colunas++)
            {
                printf("[%d]     ",matriz3[linhas][colunas]);
            }
    printf("\n");
    }

return 0;

//////////////////////////////////////////////////////// Questão 7

int i, j, matriz[10][10];

for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
            {
                if(i < j)
                {
                    matriz[i][j] = 2 * i + 7 * i;
                }else if(i == j)
                    {
                        matriz[i][j] = 3 * i^2;
                    }else
                        {
                            matriz[i][j] = 5 * j^2 + 1;
                        }
            }
    }

for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
            {
                printf("[%d]     ",matriz[i][j]);
            }
    printf("\n");
    }

return 0;

//////////////////////////////////////////////////////// Questão 8

int i, j, n1, n2, n3, soma, matriz[3][3];

printf("Informe os valores matriz.\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                printf("Elemento [%i][%i] da matriz: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

printf("-----------------------------\n");
for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                printf("[%d]     ",matriz[i][j]);
            }
    printf("\n");
    }

n1 = matriz[0][1];
n2 = matriz[0][2];
n3 = matriz[1][2];

soma = n1 + n2 + n3;

printf("A soma dos valores a cima da diagonal principal é: %i.", soma);


return 0;
//////////////////////////////////////////////////////// Questão 9

int i, j, n1, n2, n3, soma, matriz[3][3];

printf("Informe os valores matriz.\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                printf("Elemento [%i][%i] da matriz: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

printf("-----------------------------\n");
for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                printf("[%d]     ",matriz[i][j]);
            }
    printf("\n");
    }

n1 = matriz[1][0];            
n2 = matriz[2][0];
n3 = matriz[2][1];

soma = n1 + n2 + n3;

printf("A soma dos valores abaixo da diagonal principal é: %i.", soma);


return 0;
//////////////////////////////////////////////////////// Questão 10

int i, j, n1, n2, n3, soma, matriz[3][3];

printf("Informe os valores matriz.\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                printf("Elemento [%i][%i] da matriz: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

printf("-----------------------------\n");
for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                printf("[%d]     ",matriz[i][j]);
            }
    printf("\n");
    }

n1 = matriz[0][0];            
n2 = matriz[1][1];
n3 = matriz[2][2];

soma = n1 + n2 + n3;

printf("A soma dos valores da diagonal principal é: %i.", soma);


return 0;

//////////////////////////////////////////////////////// Questão 11

int i, j, n1, n2, n3, soma, matriz[3][3];

printf("Informe os valores matriz.\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                printf("Elemento [%i][%i] da matriz: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

printf("-----------------------------\n");
for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                printf("[%d]     ",matriz[i][j]);
            }
    printf("\n");
    }

n1 = matriz[0][2];            
n2 = matriz[1][1];
n3 = matriz[2][0];

soma = n1 + n2 + n3;

printf("A soma dos valores da diagonal secundaria e: %i.", soma);


return 0;


//////////////////////////////////////////////////////// Questão 12

int i, j, matriz[3][3], transposta[3][3];

printf("Informe os valores matriz.\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                printf("Elemento [%i][%i] da matriz: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                transposta[i][j] = matriz[i][j];
            }
    }

printf("A transposta da matriz fornecida é: \n");
for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                printf("[%d]     ",transposta[j][i]);
            }
    printf("\n");
    }

return 0;

//////////////////////////////////////////////////////// Questão 13

int i, j;
int matriz[4][4] =
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

printf("Matriz original: \n\n");

int linhas, colunas;

for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
            {
                printf("[%d]     ",matriz[i][j]);
            }
    printf("\n");
    }

for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
            {
                if(j > i)
                {
                    matriz[i][j] = 0;
                }
            }
    }
printf("\n");

printf("Matriz transformada em uma matriz triangular inferior: \n\n");

for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
            {
                printf("[%d]     ",matriz[i][j]);
            }
    printf("\n");
    }

return 0;
//////////////////////////////////////////////////////// Questão 14

int numeroExitente(int cartela[5][5], int numero)
{
    for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < 5; j++) 
            {
                if (cartela[i][j] == numero) 
                {
                    return 1;
                }
            }
     }

return 0; 
}

void gerarCartela(int cartela[5][5])
{
    int num;

    for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < 5; j++) 
            {
                num = rand() % (MAX_NUM + 1);
                while(numeroExitente(cartela, num));
                {
                    cartela[i][j] = num;   
                }
            }
     }
}
//////////////////////////////////////////////////////// Questão 15

//////////////////////////////////////////////////////// Questão 16

//////////////////////////////////////////////////////// Questão 17

int i, j, matriz[3][3];
int soma[3] = {0};

printf("Informe os valores matriz.\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                printf("Elemento [%i][%i] da matriz: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

printf("Matriz escrita: \n\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                printf("[%d]     ",matriz[i][j]);
            }
    printf("\n\n");
    }

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                soma[j] += matriz[i][j];
            }
    }

printf("Array com o valor da soma das colunas: \n\n");

for (i = 0; i < 3; i++)
{
    printf("%i", soma[i]);
}


return 0;

//////////////////////////////////////////////////////// Questão 18

int i, j, matriz[5][4];
int matriculas = 0, mediaProvas, mediaTrabalhos, notaFinal




//////////////////////////////////////////////////////// Questão 19

//////////////////////////////////////////////////////// Questão 20

void imprimirMatriz(int matriz[2][2])
{
    int i,j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            {
                printf("[%d]     ",matriz[i][j]);
            }
    printf("\n");
    }
}

void adicionar_subtrairMatriz(int matriz1[2][2], int matriz2[2][2], int matriz3[2][2], int opcao)
{
    int i,j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            {
                if(opcao == 1)
                {
                matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
                }else
                {
                    matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
                }

            }
    }
}

void constanteMatriz(int matriz[2][2], int constante)
{
    int i,j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            {
                matriz[i][j] += constante;              
            }
    }
}


int main()
{

int i, j, opcao , constante;
int matriz1[2][2], matriz2[2][2],  matriz3[2][2];

printf("Informe os valores da primeira matriz: \n");

for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++ )
            {
                printf("Elemento [%i][%i] da primeira matriz: ", i,j);
                scanf("%i", &matriz1[i][j]);
            }
    }

printf("\n");

printf("Informe os valores da segunda matriz: \n");

for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++ )
            {
                printf("Elemento [%i][%i] da segunda matriz: ", i,j);
                scanf("%i", &matriz2[i][j]);
            }
    }

printf("\n");

printf("Menu de opções: \n");
printf("-------------------------------------\n");
printf("|Qual operação você deseja realizar?|\n");
printf("|                                   |\n");
printf("|1- Somar as duas matrizes          |\n");
printf("|2- Subtrair a primeira da segunda  |\n");
printf("|3- Adicionar uma constante as duas |\n");
printf("|4- Imprimir as matrizes            |\n");
printf("-------------------------------------\n");
scanf("%i", &opcao);

switch (opcao)
{
case 1:
    adicionar_subtrairMatriz(matriz1, matriz2, matriz3, opcao);
    printf("Resultado da soma das duas matrizes: \n");
    imprimirMatriz(matriz3);
    break;

case 2:
    adicionar_subtrairMatriz(matriz1, matriz2, matriz3, opcao);
    printf("Resultado da subtração da primeira matriz da segunda: \n");
    imprimirMatriz(matriz3);
    break;

case 3:
    printf("Escolha o valor da constante: ");
    scanf("%i", &constante);
    constanteMatriz(matriz1, constante);
    constanteMatriz(matriz2, constante);

    printf("Resultado da adição de uma constante à primeira matriz: \n");
    imprimirMatriz(matriz1);

    printf("Resultado da adição de uma constante à segunda matriz: \n");
    imprimirMatriz(matriz2);
    break;

case 4:
    printf("Primeira matriz: \n");
    imprimirMatriz(matriz1);
    printf("\n");

    printf("Segunda matriz: \n");
    imprimirMatriz(matriz2);
    break;

default: 
    printf("Opção inválida.");
    break;
}

return 0;
}
//////////////////////////////////////////////////////// Questão 21

int i, j, matrizA[3][3], matrizB[3][3], matrizC[3][3];

printf("Informe os valores da matriz A.\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                printf("Elemento [%i][%i] da matriz: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

printf("\n");

printf("Informe os valores da matriz B.\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                printf("Elemento [%i][%i] da matriz: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

printf("\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                matrizC[i][j] = matrizA[i][j] * matrizB[i][j];

            }
    }

printf("Matriz multiplicadando A por B: \n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                printf("[%d]     ",matrizC[i][j]);
            }
    printf("\n");
    } 

return 0;

//////////////////////////////////////////////////////// Questão 22

int i, j, matriz[3][3], matriz2[3][3];

printf("Informe os valores matriz.\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                printf("Elemento [%i][%i] da matriz: ", i,j);
                scanf("%i", &matriz[i][j]);
            }
    }

printf("\n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++ )
            {
                matriz[i][j] *= 2;
                matriz2[i][j] = matriz[i][j];
            }
    }

printf("Matriz multiplicada por 2: \n");

for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                printf("[%d]     ",matriz2[i][j]);
            }
    printf("\n");
    }

return 0;