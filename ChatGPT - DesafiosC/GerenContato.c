#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAXCT 100

typedef struct
{
    char nome[30];
    int telefone;
} Contato;

void addCT(Contato contato[], int *contador);
void listCT(Contato contato[], int contador);
void buscarCT(Contato contato[], int contador);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu, contador = 0;
    Contato contato[MAXCT];

    do
    {
        printf("LISTA DE CONTATOS\n1 - Adicionar Contato\n2 - Listar Contatos\n3 - Buscar Contato\n4 - Sair\n--> ");
        scanf("%d", &menu);
        getchar();

        switch (menu)
        {
        case 1:
            addCT(contato, &contador);
            break;
        case 2:
            listCT(contato, contador);
            break;
        case 3:
            buscarCT(contato, contador);
            break;
        case 4:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida, tente novamente.\n");
        }
    } while (menu != 4);

    return 0;
}

void addCT(Contato contato[], int *contador)
{
    if (*contador >= MAXCT)
    {
        printf("Limite de contatos atingido.\n");
        return;
    }
    printf("Nome: ");
    fgets(contato[*contador].nome, sizeof(contato[*contador].nome), stdin);
    printf("Telefone: ");
    scanf("%d", &contato[*contador].telefone);
    printf("Contato adicionado com sucesso.\n\n");
    (*contador)++;
}

void listCT(Contato contato[], int contador)
{
    if (contador == 0)
    {
        printf("Nenhum contato na lista.\n");
        return;
    }
    printf("\t-CONTATOS-\t\n\n");
    for (int i = 0; i < contador; i++)
    {
        printf("Nome: %sTelefone: %d\n", contato[i].nome, contato[i].telefone);
    }
    printf("\nContatos na lista: %d\n\n", contador);
}

void buscarCT(Contato contato[], int contador)
{
    char name[30];
    printf("Insira o nome do contato que deseja buscar: ");
    fgets(name, sizeof(name), stdin);

    for (int i = 0; i < contador; i++)
    {
        if (strncmp(name, contato[i].nome, strlen(contato[i].nome) - 1) == 0)
        {
            printf("Contato encontrado na posição %d\n", i);
            return;
        }
    }
    printf("Contato não encontrado.\n");
}
