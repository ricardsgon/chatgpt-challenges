/*Faça uma lista de atletas dividos por 2 categorias A e B*/

#include <stdio.h>
#include <locale.h>

#define ATLETA_MAX 100

typedef struct
{
    char nome[100];
    float altura;
    float peso;
    char categoria;
} Atleta;

void addAtleta(Atleta Track[], int *contador, int *contadorA, int *contadorB);
void listAtleta(Atleta Track[], int contador, int contadorA, int contadorB);
void removerAtleta(Atleta Track[], int *contador, int ID);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu, ID;
    int contador = 0;
    int contadorA = 0;
    int contadorB = 0;

    Atleta Atletas[ATLETA_MAX];
    do
    {
        printf("SIMULADOR DE CATEGORIA ATLÉTICA\n1 - Adicionar Atleta\n2 - Listar Atletas\n3 - Remover Atleta\n4 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        getchar();
        switch (menu)
        {
        case 1:
            addAtleta(Atletas, &contador, &contadorA, &contadorB);
            break;
        case 2:
            listAtleta(Atletas, contador, contadorA, contadorB);
            break;
        case 3:
            printf("Insira o ID do Atleta para ser removido: ");
            scanf("%d", &ID);
            removerAtleta(Atletas, &contador, ID);
        }
    } while (menu != 4);
    return 0;
}
void addAtleta(Atleta Track[], int *contador, int *contadorA, int *contadorB)
{
    if (*contador <= ATLETA_MAX)
    {
        printf("\n");
        printf("Insira o nome do Atleta: ");
        fgets(Track[*contador].nome, sizeof(Track[*contador].nome), stdin);
        printf("Insira a altura do Atleta: ");
        scanf("%f", &Track[*contador].altura);
        printf("Insira o peso do Atleta: ");
        scanf("%f", &Track[*contador].peso);
        if ((Track[*contador].altura + Track[*contador].peso) / 2 >= 125)
        {
            Track[*contador].categoria = 'A';
            (*contadorA)++;
        }
        else
        {
            Track[*contador].categoria = 'B';
            (*contadorB)++;
        }
        printf("Categoria: %c\n\n", Track[*contador].categoria);
        (*contador)++;
    }
    else
    {
        printf("Limite de Atletas atingido.");
    }
}
void listAtleta(Atleta Track[], int contador, int contadorA, int contadorB)
{
    if (contador == 0)
    {
        printf("Nenhum Atleta na Lista.");
    }
    for (int i = 0; i < contador; i++)
    {
        printf("Nome do Atleta(ID: %d): %s", i + 1, Track[i].nome);
        printf("Altura e peso: %.1fcm %.1fkg\n", Track[i].altura, Track[i].peso);
        printf("Categoria: %c", Track[i].categoria);
        printf("\n");
    }
    printf("\n");
    printf("Atletas na categoria A: %d\n", contadorA);
    printf("Atletas na categoria B: %d\n\n", contadorB);
}
void removerAtleta(Atleta Track[], int *contador, int ID)
{
    for (int i = 0; i < *contador; i++)
    {
        if (ID == *contador)
        {
            for (int j = i; j < *contador - 1; j++)
            {
                Track[j] = Track[j + 1];
            }
        }
        else
        {
            printf("Atleta não encontrado.");
        }
        (*contador)--;
    }
}
