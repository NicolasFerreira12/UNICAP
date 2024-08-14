#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Definição da estrutura Produto
typedef struct 
{
    int id;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

// Função para adicionar um novo registro no arquivo
void adicionarRegistro(char *projeto, int posicao) 
{
    Produto produto;
    FILE *file;

    // Solicitação de entrada de dados do produto
    printf("Digite o ID do produto: ");
    scanf("%d", &produto.id);
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", produto.nome);
    printf("Digite o preco do produto: ");
    scanf("%f", &produto.preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &produto.quantidade);

    // Adiciona o registro no início do arquivo
    if (posicao == 1) 
    {
        FILE *tempFile = fopen("temp.txt", "w"); // Cria um arquivo temporário
        Produto tempProduto;

        file = fopen(projeto, "r");
        fwrite(&produto, sizeof(Produto), 1, tempFile); // Escreve o novo produto no arquivo temporário

        // Copia os registros existentes para o arquivo temporário
        while (fread(&tempProduto, sizeof(Produto), 1, file)) 
        {
            fwrite(&tempProduto, sizeof(Produto), 1, tempFile);
        }

        fclose(file);
        fclose(tempFile);

        remove(projeto); // Remove o arquivo original
        rename("temp.txt", projeto); // Renomeia o arquivo temporário para o nome original
    } else // Adiciona o registro no final do arquivo
    { 
        file = fopen(projeto, "ab");
        fwrite(&produto, sizeof(Produto), 1, file);
        fclose(file);
    }

    printf("Produto adicionado com sucesso!\n");
}

// Função para listar os registros no arquivo
void listarRegistros(char *projeto, int opcao) 
{
    FILE *file = fopen(projeto, "rb");
    Produto produto;
    int count = 0;

    if (!file) 
    {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    fseek(file, 0, SEEK_END); // Move o ponteiro para o final do arquivo
    int fileSize = ftell(file); // Obtém o tamanho do arquivo
    int totalRecords = fileSize / sizeof(Produto); // Calcula o número total de registros

    fseek(file, 0, SEEK_SET); // Move o ponteiro para o início do arquivo

    switch(opcao) 
    {
        case 1: // Lista os 5 primeiros registros
            count = (totalRecords < 5) ? totalRecords : 5;

            for (int i = 0; i < count; i++) 
            {
                fread(&produto, sizeof(Produto), 1, file);
                printf("ID: %d, Nome: %s, Preco: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            }
            break;
        case 2: // Lista os 5 últimos registros
            count = (totalRecords < 5) ? totalRecords : 5;
            fseek(file, -count * sizeof(Produto), SEEK_END);

            for (int i = 0; i < count; i++) 
            {
                fread(&produto, sizeof(Produto), 1, file);
                printf("ID: %d, Nome: %s, Preco: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            }
            break;
        case 3: // Lista todos os registros
            while (fread(&produto, sizeof(Produto), 1, file)) 
            {
                printf("ID: %d, Nome: %s, Preco: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    fclose(file);
}

// Função para buscar um registro específico no arquivo pelo ID
void buscarRegistro(char *projeto, int id) 
{
    FILE *file = fopen(projeto, "rb");
    Produto produto;
    int encontrado = 0;

    if (!file) 
    {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    // Percorre o arquivo procurando pelo ID
    while (fread(&produto, sizeof(Produto), 1, file)) 
    {
        if (produto.id == id) 
        {
            printf("Produto encontrado: \n");
            printf("ID: %d, Nome: %s, Preco: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) 
    {
        printf("Produto nao encontrado!\n");
    }

    fclose(file);
}

// Função para atualizar um registro específico no arquivo pelo ID
void atualizarRegistro(char *projeto, int id) 
{
    FILE *file = fopen(projeto, "rb+");
    Produto produto;
    int encontrado = 0;

    if (!file) 
    {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    // Percorre o arquivo procurando pelo ID
    while (fread(&produto, sizeof(Produto), 1, file)) 
    {
        if (produto.id == id) 
        {
            // Solicita novos dados para o produto
            printf("Digite o novo nome para o produto: ");
            scanf(" %[^\n]", produto.nome);
            printf("Digite o novo preco para o produto: ");
            scanf("%f", &produto.preco);
            printf("Digite a nova quantidade para o produto: ");
            scanf("%d", &produto.quantidade);

            fseek(file, -sizeof(Produto), SEEK_CUR); // Move o ponteiro para o início do registro atual
            fwrite(&produto, sizeof(Produto), 1, file); // Escreve os novos dados
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) 
    {
        printf("Produto nao encontrado!\n");
    } else 
    {
        printf("Produto atualizado com sucesso!\n");
    }

    fclose(file);
}

// Função para remover um registro específico no arquivo pelo ID
void removerRegistro(char *projeto, int id) 
{
    FILE *file = fopen(projeto, "rb");
    FILE *tempFile = fopen("temp.txt", "wb");
    Produto produto;
    int encontrado = 0;

    if (!file || !tempFile) 
    {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    // Percorre o arquivo original copiando todos os registros, exceto o que será removido
    while (fread(&produto, sizeof(Produto), 1, file)) 
    {
        if (produto.id != id) 
        {
            fwrite(&produto, sizeof(Produto), 1, tempFile);
        } else 
        {
            encontrado = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(projeto); // Remove o arquivo original
    rename("temp.txt", projeto); // Renomeia o arquivo temporário para o nome original

    if (encontrado) 
    {
        printf("Produto removido com sucesso!\n");
    } else 
    {
        printf("Produto nao encontrado!\n");
    }
}

// Função principal que apresenta um menu ao usuário para realizar diversas operações
int main() 
{
    int opcao;
    char projeto[] = "produtos.txt";
    do 
    {
        printf("------------Menu----------------\n");
        printf("|1. Adicionar um novo registros|\n");
        printf("|2. Listar registros           |\n");
        printf("|3. Buscar um registro         |\n");
        printf("|4. Atualizar um registro      |\n");
        printf("|5. Remover um registro        |\n");
        printf("|0. Sair                       |\n");
        printf("--------------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) 
        {
            case 1:
                {
                    int posicao;
                    printf("Como deseja adicionar no arquivo?\n ");
                    printf("1- Inicio 2- Final: ");
                    scanf("%d", &posicao);
                    adicionarRegistro(projeto, posicao);
                }
                break;
            case 2:
                {
                    int tipoVisualizacao;
                    printf("Escolha o tipo de visualizacao:\n");
                    printf("1. Os 5 primeiros registros\n");
                    printf("2. Os 5 ultimos registros\n");
                    printf("3. Todos os registros\n");
                    printf("Opcao: ");
                    scanf("%d", &tipoVisualizacao);
                    listarRegistros(projeto, tipoVisualizacao);
                }
                break;
            case 3:
                {
                    int id;
                    printf("Digite o ID do produto a ser buscado: ");
                    scanf("%d", &id);
                    buscarRegistro(projeto, id);
                }
                break;
            case 4:
                {
                    int id;
                    printf("Digite o ID do produto a ser atualizado: ");
                    scanf("%d", &id);
                    atualizarRegistro(projeto, id);
                }
                break;
            case 5:
                {
                    int id;
                    printf("Digite o ID do produto a ser removido: ");
                    scanf("%d", &id);
                    removerRegistro(projeto, id);
                }
                break;
            case 0:
                printf("Saindo.\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 0);

    return 0;
}
