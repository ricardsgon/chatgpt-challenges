/*Crie um programa em C para gerenciar uma agenda de contatos. O programa deve permitir que o usuário adicione, edite, visualize e remova contatos.*/

#include <stdio.h>
#include <locale.h>

#define MAXCT 100

typedef struct
{
    char nome[20];
    char email[50];
    int telefone;
    char endereco[50];
} Contato;

void addCtt(Contato contato[], int *contador);
void listCtt(Contato contato[], int contador);
void editCtt(Contato contato[], int *contador);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu;
    do
    {
        printf("CONTATOS\n\n1 - Adicionar Contato\n2 - Visualizar Contatos\n3 - Editar Contato\n4 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        getchar();
        printf("\n");
        switch (menu)
        {
        case 1:
        }
    } while (menu != 4);
}

void addCtt(Contato contato[], int *contador)
{
    if (*contador >= MAXCT)
    {
        printf("Limite de contatos atingido.");
        return;
    }
    printf("Nome: ");
    fgets(contato[*contador].nome, sizeof(contato[*contador].nome), stdin);
    printf("Telefone: ");
    scanf("%d", &contato[*contador].telefone);
    getchar();
    printf("Endereço: ");
    fgets(contato[*contador].endereco, sizeof(contato[*contador].endereco), stdin);
    printf("E-Mail: ");
    fgets(contato[*contador].email, sizeof(contato[*contador].email), stdin);

    (*contador)++;
}

void listCtt(Contato contato[], int contador)
{
    if (contador == 0)
    {
        printf("Nenhum contato adicionado.");
        return;
    }
    for (int i = 0; i < contador; i++)
    {
        printf("\tCONTATO ID %d\n", i);
        printf("Nome: %s\n", contato[i].nome);
        printf("Telefone: %d\n", contato[i].telefone);
        printf("Endereço: %s\n", contato[i].endereco);
        printf("E-Mail: %s\n\n", contato[i].email);
        printf("Contatos na lista: %d\n", contador);
    }
}

void editCtt(Contato contato[], int *contador)
{
    int ID, menu;
    printf("\n");
    printf("Insira o ID do contato que será editado: ");
    scanf("%d", ID);
    do{
    printf("1 - Mudar Nome\n2 - Mudar Telefone\n3 - Mudar Endereço\n4 - Mudar E-Mail\n5 - Sair\n");
    scanf("%d", &menu);
    getchar();
    switch(menu){
        case 1: 
            printf("Nome antigo: %s\n", contato[ID].nome);
            printf("Novo Nome: ");
            fgets(contato[ID].nome, sizeof(contato[ID].nome), stdin);
            printf("Nome alterado com sucesso.");
            break;
        case 2:
            printf("")
    }
    }while(menu != 5)
}