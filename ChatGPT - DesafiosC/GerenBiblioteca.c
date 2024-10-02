/*Escreva um programa em C para gerenciar um sistema de biblioteca.*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct
{
    char titulo[100];
    char autor[100];
    int ano;
    int numexamplar;
} Livro;

void addLivro(Livro livro[], int *contador);
void listarLivros(Livro livro[], int contador);
void procurarTitulo(Livro livro[], int contador);
void emprestarLivro(Livro livro[], int contador);
void devolverLivro(Livro livro[], int contador);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu, contador = 0;
    Livro Book[MAX_BOOKS];
    printf("BIBLIOTECA\n\n1 - Adicionar Livro\n2 - Listar Livros\n3 - Buscar por título\n4 - Emprestar Livro\n5 - Devolver Livro\n6 - Sair\n");
    printf("--> ");
    scanf("%d", &menu);
    getchar();
    switch (menu)
    {
    case 1:
        addLivro(Book, &contador);
        break;
    case 2:
        listarLivros(Book, contador);
        break;
    case 3:
        procurarTitulo(Book, contador);
        break;
    case 4:
        emprestarLivro(Book, contador);
        break;
    case 5:
        devolverLivro(Book, contador);
    }
}
void addLivro(Livro livro[], int *contador)
{
    if (*contador >= MAX_BOOKS)
    {
        printf("Número limite atingido.");
        return;
    }
    printf("Título do Livro: ");
    fgets(livro[*contador].titulo, sizeof(livro[*contador]).titulo, stdin);
    printf("Nome do Autor: ");
    fgets(livro[*contador].autor, sizeof(livro[*contador].autor), stdin);
    printf("Ano de Publicação: ");
    scanf("%d", &livro[*contador].ano);
    printf("Número de exemplares disponíveis: ");
    scanf("%d", &livro[*contador].numexamplar);
    (*contador)++;
}
void listarLivros(Livro livro[], int contador)
{
    if (contador == 0)
    {
        printf("Nenhum livro na biblioteca.");
        return;
    }
    printf("BIBLIOTECA\n\n");
    for (int i = 0; i < contador; i++)
    {
        printf("ID: %d\n", i + 1);
        printf("Título: %s\n", livro[i].titulo);
        printf("Autor: %s\n", livro[i].autor);
        printf("Ano de Publicação: %d\n", livro[i].ano);
        printf("Número de exemplares disponíveis: %d", livro[i].numexamplar);
    }
}
void procurarTitulo(Livro livro[], int contador)
{
    char nam[100];
    printf("Digite o nome do Livro: ");
    fgets(nam, 100, stdin);
    for (int i = 0; i < contador; i++)
    {
        if (strcmp(nam, livro[i].titulo) == 0)
        {
            printf("Livro Encontrado: \n");
            printf("ID: %d", i);
            printf("Título: %s\n", livro[i].titulo);
            printf("Autor: %s\n", livro[i].autor);
            printf("Ano de Publicação: %d\n", livro[i].ano);
            printf("Número de exemplares disponíveis: %d", livro[i].numexamplar);
            return;
        }
    }
    printf("Livro não encontrado no sistema.\n");
}
void emprestarLivro(Livro livro[], int contador)
{
    char nam[100];
    printf("Digite o nome do Livro: ");
    fgets(nam, 100, stdin);
    for (int i = 0; i < contador; i++)
    {
        if (strcmp(nam, livro[i].titulo) == 0)
        {
            livro[i].numexamplar--;
            printf("Livro Emprestado com sucesso. Número de exemplares disponíveis: %d", livro[i].numexamplar);
            return;
        }
    }
    printf("Livro não encontrado no sistema.\n");
}
void devolverLivro(Livro livro[], int contador)
{
    char nam[100];
    printf("Digite o nome do Livro: ");
    fgets(nam, 100, stdin);
    for (int i = 0; i < contador; i++)
    {
        if (strcmp(nam, livro[i].titulo) == 0)
        {
            livro[i].numexamplar++;
            printf("Livro devolvido com sucesso. Número de exemplares disponíveis: %d", livro[i].numexamplar);
            return;
        }
    }
    printf("Livro não encontrado no sistema.\n");
}