#include <stdio.h>
 
void insertionSort(int arr[], int tamanho)
{
    int i, j, atual;
 
    for (i = 1; i < tamanho; i++)
    {
        atual = arr[i];
        j - i - 1;
 
        while(j >= 0 && arr[j] > atual)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
       
        arr[j +1] = atual;
    }
   
}
 
int buscaBinaria(int arr[], int tamanho, int valor, int *iteracoes)
{
    int inicio = 0;
    int fim = tamanho - 1;
    *iteracoes = 0;
 
    while (inicio <= fim) {
        (*iteracoes)++;
        int meio = inicio + (fim - inicio) / 2;
 
        // Verifica se o valor está presente no meio
        if (arr[meio] == valor)
            return meio;
 
        // Se o valor for maior, ignora a metade à esquerda
        if (arr[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1; // Se o valor for menor, ignora a metade à direita
    }
 
    return -1;
}
 
int main()
{
    int valor;
    int arr[] = {2, 3, 4, 10, 40, 55, 67, 75, 43, 45, 754, 7, 88};
    int tamanho = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, tamanho);
 
    printf("Qual número você deseja buscar?\n");
    scanf("%i", &valor);
 
    //int valor = 10;
    int iteracoes = 0;
    int resultado = buscaBinaria(arr, tamanho, valor, &iteracoes);
 
    if (resultado != -1)
        printf("Elemento encontrado na posição %d.\n", resultado);
    else
        printf("Elemento não encontrado no vetor.\n");
 
    printf("Número de iterações: %d\n", iteracoes);
 
    return 0;
}